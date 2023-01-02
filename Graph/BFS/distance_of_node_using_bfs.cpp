
#include<bits/stdc++.h>
using namespace std;

vector<int>adj_node[100];
bool complited[100];
int level[100];


void bfs(int source){
    memset(complited,false,sizeof(complited));
    memset(level,-1,sizeof(level));

    queue<int>q;
    q.push(source);
    level[source] = 0;

    while(!q.empty()){
        int parent = q.front();
        q.pop();
        if(complited[parent] == false){
            // cout<<parent<<endl;
            complited[parent] = true;
        }
        
        for(int i = 0; i < adj_node[parent].size();i++){
            int children = adj_node[parent][i];
            if(complited[children] == false){
                q.push(children);
                level[children] = level[parent]+1;
            }
            
        }
    }

}

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
