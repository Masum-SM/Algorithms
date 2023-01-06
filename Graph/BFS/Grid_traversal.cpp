/* 
sample input:

5 8
########
#.A#...#
#.##.#B#
#......#
########

 */

#include<bits/stdc++.h>

using namespace std;

int n,m;
const int N = 2002;
int maze[N][N], visited[N][N], level[N][N];
