#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
const int INF = 1e9;

int nodes, edges;
vector<pair<int, int>> adj_list[N];

int d[N], visited[N];

void dijkstra(int src)
{
    for (int i = 1; i <= nodes; i++)
    {
        d[i] = INF;
    }

    d[src] = 0;

    for (int i = 1; i <= nodes; i++)
    {
        int selected_node = -1;
        
        for (int j = 1; i <= nodes; i++)
        {
            if (visited[j] == 0)
            {
                if (selected_node == -1 || d[j] < d[selected_node])
                {
                    selected_node = j;
                }
            }
        }

    
    
    }
}


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
     int src = 1;
    dijkstra(src);
  
      return 0;
}
