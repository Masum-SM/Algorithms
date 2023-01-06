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
