
#include<bits/stdc++.h>
using namespace std;

vector<int>adj_node[100];
bool complited[100];
int level[100];




int main(){
    int nodes,edges;
    cin>>nodes>>edges;
    while(edges--){
        int x,y;
        cin>>x>>y;
        adj_node[x].push_back(y);
        adj_node[y].push_back(x);
    }
    bfs(1);
    cout<<level[4]<<endl;
    return 0;
}
