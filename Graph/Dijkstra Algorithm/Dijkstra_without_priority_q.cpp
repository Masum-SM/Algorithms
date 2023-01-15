#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
const int INF = 1e9;

int nodes, edges;
vector<pair<int, int>> adj_list[N];



int main()
{

    cin >> nodes >> edges;
    while (edges--)
    {
        int x, y, w;
        cin >> x >> y >> w;
        adj_list[x].push_back({y, w});
        adj_list[y].push_back({x, w});
    }
  
  
      return 0;
}
