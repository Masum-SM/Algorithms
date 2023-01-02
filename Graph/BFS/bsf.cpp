/* 
WHY BFS IS USED?
1. For normal level order traversing.
2. Finding shortest path for unweighted graph.

we use Bfs when there are high probability to find ans by visiting shortest path.
for example, 
we need a bike and we know that the batter place for buying bike is sylhet border and comilla border. Our location is dhaka, in such a case, we know that comilla is nearest place to achive bike, and the cost will be less. so we go to comilla. In such type of situation we use BFS.

on the otherhand, we do not the actual place of finding better bike in banglades. and we want bike in mimimum cost and time, in such a situation we use DFS. whcich is depth first search.if we go by level order distance from dhaka, if the place is far then the time and cost will be high. so BFS will not the best option.
*/


#include<bits/stdc++.h>
using namespace std;

vector<int>adj_node[100];
bool complited[100];


void bfs(int source){
    memset(complited,false,sizeof(complited));
    queue<int>q;
    q.push(source);
    while(!q.empty()){
        int frnt = q.front();
        q.pop();
        if(complited[frnt] == false){
            cout<<frnt<<endl;
            complited[frnt] = true;
        }
        
        for(int i = 0; i < adj_node[frnt].size();i++){
            int value = adj_node[frnt][i];
            if(complited[value] == false){
                q.push(value);
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
    return 0;
}
