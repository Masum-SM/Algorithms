#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int>adj_node[N];
int visited[N];

void bfs(int source){
    queue<int>q;
    q.push(source);
    while(!q.empty()){
        int frnt = q.front();
        q.pop();
        for(int value:adj_node[frnt]){
            if(!visited[value]){
                q.push(value);
                visited[value] = true;

            }
        }

    }
}

int main(){
    int n,e;
    cin>>n>>e;
    int count = 0;
    while(e--){
        int x,y;
        cin>>x>>y;
        adj_node[x].push_back(y);
        adj_node[y].push_back(x);
    }
    for(int i = 1; i<n+1;i++){
        if(!visited[i]){
            bfs(i);
            count++;
        }
    }
    cout<<"Number of connected component : "<<count<<endl;

    return 0;
}

