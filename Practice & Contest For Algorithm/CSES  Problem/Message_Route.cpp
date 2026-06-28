#include<bits/stdc++.h>
using namespace std;

const int N = 100005;
vector<int> adj_list[N];
bool vis[N];
int level[N];
int parent[N];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while(!q.empty())
    {
        int par = q.front();
        q.pop();

        for(int child : adj_list[par])
        {
            if(vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
    }
}
int main()
{
    int n,e;
    cin >> n >> e;
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    } 
    memset(vis,false,sizeof(vis));
    memset(level,-1, sizeof(level));
    memset(parent,-1, sizeof(parent));
    int src=1,dst=n;
    bfs(src);

   
    if(level[dst] == -1)
    {
        cout << "IMPOSSIBLE\n";
        return 0;
    }

    vector<int> path;
    int node = dst;
    while(node != -1)
    {
        path.push_back(node);
        node = parent[node];
    }
    reverse(path.begin(),path.end());

    cout << path.size() << "\n";   
    for(int x : path)
    {
        cout << x <<" ";
    }
    cout << "\n";
    return 0;
}