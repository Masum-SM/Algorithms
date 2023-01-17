
// problem link - https://cses.fi/problemset/task/1668


/*
5 4
1 2
1 3
2 3
4 5 
output:  IMPOSSIBLE


1 -- 2
|
3
(1)
(2)  (1)
4 -- 5
(2)  (1)

5 3
1 2
1 3
4 5

Output -> 
1 2 2 1 2
1 2 2 2 1
2 1 1 2 1
*/


#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+1;
vector<int>adj_list[N];

int main(){
    int n,e;
    cin>>n>>e;
    for(int i = 0 ; i < e ; i++){
        int x,y;
        cin>>x>>y;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }

    bool is_biColorable = true;

    for(int i = 1 ; i <= n ; i++){
        if(visited[i] == 0){
            colored[i] = 1;
            is_biColorable = dfs(i);
            if(!is_biColorable) break;

            // bool ok = dfs(i);
            // if(!ok){
            //     is_biColorable = false;
            //     break;
            // }
        }
    }

    if(!is_biColorable){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        for(int i = 1 ; i <=n ; i++){
            cout<<colored[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
