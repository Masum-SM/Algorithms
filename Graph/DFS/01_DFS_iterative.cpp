/* 
dfs iterative
input:
5 4
0 1
0 2
1 3
1 4

output: 0 2 1 4 3 
 */

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5; // 1e5 == 10^5 
vector<int>adj_node[N]; // for storing adjecnt list of a node..
int visited[N];

//------------------------------------> DFS <--------------------------------
void dfs(int source){
    stack<int>st;
    st.push(source);
    
    while(!st.empty()){
        int temp = st.top();
        st.pop();
        if(!visited[temp]){
            cout<<temp<<" ";
            visited[temp] = true;
        }
        for(auto child:adj_node[temp]){
            if(!visited[child]){
                st.push(child);
            }
        }
        
    }

}

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

