
/* 
0---1---2----3
    |   |
    |   |
    5---4

Sample Input:
6 6 // nodes = 6 and edges = 6

0 1
1 2
2 3
1 5
2 4
5 4

OUTPUT:
Level of 0: 0
Level of 1: 1
Level of 2: 2
Level of 3: 3
Level of 4: 3
Level of 5: 2
 */


#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int>adj_list[N]; // a vector array for storing adjecnt node.
int visited[N]; // an array to keep track of visited nodes.
int level[N]; //an array to count the level of nodes.

void bfs(int source){
    queue<int>q; // for bfs, we use a queue.
    q.push(source); // initial element of the queue is the source node of the graph.
    level[source]= 0; // setting the initial level of source node is 0.we know that the leveling starts from 0.



}


int main(){

    int n,e;
    cin>>n>>e;
    while(e--){
        int x,y;
        cin>>x>>y;
        // pusing value in the adjecnt list for undirected or bi-directional graph.
        adj_list[x].push_back(y); 
        adj_list[y].push_back(x);
    }
    bfs(0); // source node is 0 for bfs
    


    return 0;
}
