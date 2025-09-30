#include<bits/stdc++.h>
using namespace std;

long long int dp[1005];  // o(n)
int fibo(long long n)
{
    if(n<2)
        return n;
    if(dp[n] != -1)
        return dp[n];
    dp[n] = fibo(n-1) + (n-2);
    return dp[n];
}
int main()
{
    memset(dp,-1,sizeof(dp));
    long long int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}