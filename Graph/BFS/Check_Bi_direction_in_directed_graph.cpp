#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int>adj_node[N];
int visited[N];



int main(){
    int n,e;
    cin>>n>>e;
    while(e--){
        int x,y;
        cin>>x>>y;
        adj_node[x].push_back(y);
    }
    if(!bfs(1)){
        cout<<"The graph is not bi-directional"<<endl;
    }
    else{
        cout<<"The graph is bi-directional"<<endl;
    }


    return 0;
}
