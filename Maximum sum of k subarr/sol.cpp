#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vvi=vector<vi>;
using vvvi=vector<vvi>;
using ll=long long;

int f(int i, int j, int k, int K, vi& a, vvvi& dp){
    if(i==size(a) || j==K && k==0) return 0;
    if(dp[i][j][k]!=-1e9) return dp[i][j][k];
    if(k==0) return dp[i][j][k]=max(f(i+1,j,0,K,a,dp),a[i]+f(i+1,j+1,1,K,a,dp));
    return dp[i][j][k]=max(f(i+1,j,0,K,a,dp),a[i]+f(i+1,j,1,K,a,dp));
}

int main()
{
    int n,q;
    cin>>n>>q;
    vi a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    
    while(q--){
        int k;
        cin>>k;
        vvvi dp(n,vvi(k+1,vi(2,-1e9)));
        cout<<f(0,0,0,k,a,dp)<<"\n";
    }
    return 0;
}
