#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
const long long INF = 1e18;

vector< pair<int, int> >adj_list[N];




int main() {

    cin >> nodes >> edges;

    for(int i = 0 ; i < edges ; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({ v, w });
        adj_list[v].push_back({ u, w });
    }

 return 0; 
}
