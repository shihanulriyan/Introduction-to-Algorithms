#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
int n,m;
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};

bool valid(int i , int j)
{
    if(i<0 || i>=n || j<0 || j>=m) return false;
    if(grid[i][j] == '#') return false;
    if(vis[i][j]) return false;
    return true;
}
void dfs( int si, int sj)
{
    vis[si][sj] = true;
    for(int k=0;k<4;k++)
    {
        int ci = si + d[k].first;
        int cj = sj + d[k].second;
        if(valid(ci,cj) && !vis[ci][cj])
        {
            dfs(ci,cj);
        }
    }
}
int main()
{
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> grid[i][j];
        }
    }
    memset(vis,false,sizeof(vis));

    int rooms = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='.' && !vis[i][j])
            {
                dfs(i,j);
                rooms++;
            }
        }
           
    }
    cout << rooms <<"\n";
    return 0;
}