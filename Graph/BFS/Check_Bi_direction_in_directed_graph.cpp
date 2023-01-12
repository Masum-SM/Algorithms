#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int>adj_node[N];
int visited[N];

bool is_bidrectional(int frnt,int value){
    for(int v : adj_node[value]){
        if(v == frnt){
            return true;
        }
    }
    return false;

}

bool bfs(int source){
    queue<int>q;
    q.push(source);

    while(!q.empty()){
        int frnt = q.front();
        q.pop();
        if(adj_node[frnt].empty()){
            return false;
        }
        for(int value:adj_node[frnt]){
            if(!is_bidrectional(frnt,value)){
                return false;
            }
            if(!visited[value]){
                q.push(value);
                visited[value] = true;
            }
        }

    }
    return true;
}
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
