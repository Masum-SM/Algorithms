#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
const long long INF = 1e18;

vector< pair<int, int> >adj_list[N];

int visited[N], parent[N];
int nodes, edges;

long long d[N];


void dijkstra(int src) {
    for(int i = 1; i<=nodes; i++){
        d[i] = INF;
    }
    d[src] = 0;

    priority_queue< pair<long long,int> > pq;
    pq.push({0,src});




    }
}




int main() {

    cin >> nodes >> edges;

    for(int i = 0 ; i < edges ; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({ v, w });
        adj_list[v].push_back({ u, w });
    }
    
     int src = 1;
    dijkstra(src);

    if(visited[nodes] == 0) {
        cout<<-1<<endl;
        return 0;
    }

    
    int current_node = nodes;
    vector<int>path;

 return 0; 
}
