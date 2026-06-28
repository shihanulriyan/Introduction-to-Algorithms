#include<bits/stdc++.h>
using namespace std;
bool isvalid(vector<int>& a, int n)
{
    int even_pos_parity = -1;
    int odd_pos_parity = -1;

    for(int i=0;i<n;i++)
    {
        int pos = i+1;
        int parity = a[i] % 2;

        if(pos %2 == 0)
        {
           if(parity !=0)
           {
                return false;
           }
        }
        else
        {
            if(parity !=1)
            {
                return false;
            }
        }
    
    }
    return true;

}

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
        if(isvalid(a,n))
        {
            cout <<"YES\n";
        }
        else
        {
            cout <<"NO\n";
        }
    }
    return 0;
}