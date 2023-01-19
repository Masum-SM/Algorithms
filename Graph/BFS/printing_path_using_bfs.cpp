/* 
problem link - https://cses.fi/problemset/task/1667/
Writer - Md.Unus Masum
Date - 13-01-23
email - unusmasum0@gmail.com
*/


#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+9;
vector<int>adj_list[N];
int visited[N],level[N],parent[N];

void bfs(int source){
    queue<int>q;
    q.push(source);
    level[source] = 1;
    parent[source] = -1;
    visited[source] = 1;


    while(!q.empty()){
        int frnt = q.front();
        q.pop();

        for(int adj_node:adj_list[frnt]){
            if(visited[adj_node]==0){
                parent[adj_node] = frnt;
                visited[adj_node] = 1;
                level[adj_node] = level[frnt]+1;
                q.push(adj_node);
            }
        }

    }
}

int main(){
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i = 0;i< edges; i++){
        int x,y;
        cin>>x>>y;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }

    vector<int>path;
    int src = 1;
    int dst = nodes;

    bfs(src);

    if(visited[nodes] == 1){
        cout<<level[nodes]<<endl;
        
        int selected_node = nodes;
        while(true){
            path.push_back(selected_node);
            if(parent[selected_node] == -1){
                break;
            }

            selected_node = parent[selected_node];
        }
        reverse(path.begin(),path.end());
        for(int node : path){
            cout<<node<<" ";
        }
    }
    else{
        cout<<"IMPOSSIBLE"<<endl;
    }
    cout<<endl;
    


    return 0;
}
