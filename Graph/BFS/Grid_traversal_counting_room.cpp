// problem link - https://cses.fi/problemset/task/1192

/* 

Target : finding out the number of room in floor.
 # --> wall.
 . --> room.
 Room(.) is coverd by wall(#) from 4 side(top,bottom,left,right)

---------------------------------
| # | # | # | # | # | # | # | # |
---------------------------------
| # | . | . | # | .| . | . | # |
---------------------------------
| # | # | # | # | . | # | . | # |
---------------------------------
| # | . | . | # | . | . | . | # |
---------------------------------
| # | # | # | # | # | # | # | # |
---------------------------------


Input:
5 8
########
#..#...#
####.#.#
#..#...#
########

Output:
3
 */



#include<bits/stdc++.h>
using namespace std;

int n,m;
const int N = 2002;
int maze[N][N], visited[N][N];


// ----------------------------> Checking the cell in Maze or not <-----------------------------
/* 

cell = {x,y}
if x co-ordinate is out-of n (number of row) and y co-ordinate is out-of m (number of column), cell {x,y} is out of maze.

 */
bool is_inMaze(pair<int,int>co_ord){
    int x = co_ord.first;
    int y = co_ord.second;
    if(0<= x < n && 0<= y <m){
        return true;
    }
    return false;
}

// --------------------------> Checking the cell in room(safe) or wall <---------------------------
/* 

cell = {x,y}
if maze[x][y] == -1 it is not safe, cz we define wall(#) position as -1;

 */
bool is_safe(pair<int,int>co_ord){
    int x = co_ord.first;
    int y = co_ord.second;
    if(maze[x][y] == -1){
        return false;
    }
    return true;
}



/* 
according the problem,
we can move into right, left, top and down not corner movement.
so possible adjecnt cell for a cell will be..
(x,y) --> top -->(x , y+1)
      --> bottom -->(x , y-1)
      --> right -->(x+1 , y)
      --> left -->(x-1 , y)

    x = 0  0   1   -1
    y = 1  -1  0   0

    int dx[] = {0,0,1,-1};
    int dy[] = {1,-1,0,0};
 */
int dx[]= {0,0,-1,1};
int dy[]={1,-1,0,0};



// ------------------------------- BFS --------------------------------------
void bfs(pair<int,int>src){
    queue < pair<int,int> > q; // Declare a pair type queue where pair type is int & int.
    q.push(src);

    while(!q.empty()){
        pair<int,int>frnt = q.front();
        q.pop();
     
        int x = frnt.first;
        int y = frnt.second;

        for(int i = 0 ;i<4;i++){ // for top,bottom,left and right adjecent cell.
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            pair<int,int>adj_cell = {new_x,new_y};
         
            if(visited[new_x][new_y] == 0 && is_inMaze(adj_cell) == true && is_safe(adj_cell) == true){
                visited[new_x][new_y] = 1;
                q.push(adj_cell);
            }


        }
    }


}



int main(){
    
    cin>>n>>m;
    for(int i = 0 ; i < n ; i++){
        string input;
        cin>>input;
        for(int j = 0; j<m; j++){
            if(input[j] == '#'){
                maze[i][j] = -1;
            }
        }   
    }
 
    int room_count = 0;
    while(true){
        pair<int,int> unvisited_pos = is_visited();

        if(unvisited_pos == pair<int,int>(-1,-1)){
            break;
        }
        bfs(unvisited_pos);
        room_count++;
    }
    cout<<room_count<<endl;


    return 0;
}
