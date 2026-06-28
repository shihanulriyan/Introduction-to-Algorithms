#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
        int x,y;
        cin >> x >> y;
        int screns_for_big = (y+1)/2;

        int free_calls = screns_for_big* 15 - 4 * y;
        int remain_small = max(0,x - free_calls);
        int screns_for_small = (remain_small + 14) /15;
        
        cout << screns_for_big + screns_for_small <<'\n';
    }

    return 0;
}