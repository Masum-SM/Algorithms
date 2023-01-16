#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int>adj_node[N];

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

    return 0;
}

