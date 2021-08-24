//Unique Paths
//https://leetcode.com/problems/unique-paths/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(n) for(int i=0; i<n; i++)
#define mod 1000000007
void solve();
int main()
{
    //fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    cerr << "time: " << (float)clock() / CLOCKS_PER_SEC << " sec" << endl;
    return 0;
}

//dp solution
// int uniquepaths(int i,int j,int n,int m , vector< vector <int> > &dp)
// {
//     if(i == n-1 && j == m-1)
//         return 1;
//     if(i>=n || j>=m)    
//         return 0;
//     //remove dp for a recursive solution
//     if(dp[i][j] !=-1) return dp[i][j];
//     else return dp[i][j] = uniquepaths(i+1,j,n,m,dp) + uniquepaths(i,j+1,n,m,dp); 
// }

// void solve()
// {
//     int n,m;
//     cin>>n>>m;
//     vector<vector<int>>dp(n);
//     forn(n)
//         dp[i] = vector<int>(m,-1);
//     cout<<uniquepaths(0,0,n,m,dp);
// }
//combination solution
void solve ()
{
    int n,m;
    cin>>n>>m;

    int N=n+m-2;
    int r = n-1;
    double res = 1;

    for(int i=1; i<=r; i++)
        res = res *(N-r+i)/i;
    cout<<(int)res;
}