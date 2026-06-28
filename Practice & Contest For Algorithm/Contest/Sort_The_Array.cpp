#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        vector<int> blocks;
        blocks.push_back(a[0]);
        for(int i=0;i<n;i++)
        {
            if(a[i] != a[i - 1])
            {
                blocks.push_back(a[i]);

            }
        }
        vector<int>dp;
        for(auto x: blocks)
        {
            auto it = upper_bound(dp.begin(),dp.end(),x);
            if(it == dp.end())dp.push_back(x);
            else *it = x;
        }
        int operations  = (int)blocks.size() - (int)dp.size();
        cout << operations <<"\n";
    }                                                                                                                                                                                                                                                                                             
    return 0;
}