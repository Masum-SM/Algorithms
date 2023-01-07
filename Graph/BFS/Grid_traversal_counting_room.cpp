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


    return 0;
}
