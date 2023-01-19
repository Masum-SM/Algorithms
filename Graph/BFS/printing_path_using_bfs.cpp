
/* 
problem link - https://cses.fi/problemset/task/1667/
Writer - Md.Unus Masum
Date - 13-01-23
email - unusmasum0@gmail.com
*/


#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+9;
vector<int>adj_list[N];



int main(){
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i = 0;i< edges; i++){
        int x,y;
        cin>>x>>y;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }

   
    


    return 0;
}
