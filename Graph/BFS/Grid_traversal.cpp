/* 
sample input:

5 8
########
#.A#...#
#.##.#B#
#......#
########

 */

#include<bits/stdc++.h>

using namespace std;

int n,m;
const int N = 2002;
int maze[N][N], visited[N][N], level[N][N];

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



void bfs(pair<int,int>src){
    queue< pair<int,int> >q;
    int x = src.first;  // first value of pair.
    int y = src.second; // second value of pair.
    visited[x][y] = 1;  // source visited.
    level[x][y] = 0;    // set level of source at 0.
    q.push(src);        // source pushed into queue.


    while(!q.empty()){
        pair<int,int>frnt = q.front();
        q.pop();

        int x = frnt.first;
        int y = frnt.second;
        for(int i = 0 ; i < 4 ; i++){
            int new_x = x + dx[i];
            int new_y = y + dy[i];

            pair<int,int>adj_cell = {new_x,new_y};
            


        }



    }

}



int main(){
    cin>>n>>m;
    pair<int,int>src,dst;

    memset(level,-1,sizeof(level));

    for(int i = 0 ; i < n ; i++){
        string input;
        cin>>input;
        for(int j = 0 ; j < m ; j++){
            if(input[j] == '#'){
                maze[i][j] = -1;
            }
            else if(input[j] == 'A'){
                src = {i,j};
            }
            else if(input[j] == 'B'){
                dst = {i,j};
            }
        }
    }
    if(level[dst.first][dst.second] == -1){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
        cout<<level[dst.first][dst.second]<<endl;
    }


    return 0;
}
