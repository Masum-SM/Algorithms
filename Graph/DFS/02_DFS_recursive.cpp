/* 
dfs reccursive
input:
5 4
0 1
0 2
1 3
1 4

output: 0 1 3 4 2 
 */

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int>adj_node[N];
int visited[N];



int main(){
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i = 0; i<edges;i++){
        int x,y;
        cin>>x>>y;
        adj_node[x].push_back(y);
        adj_node[y].push_back(x);
        
    }
    dfs(1);

    return 0;
}
