// Pascal Triangle
// https://leetcode.com/problems/pascals-triangle/

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


void solve()
{
    int n;
    cin>>n;

    vector< vector< int > > pascal(n);

    for (int i = 0; i < n ; i++)
    {
        pascal[i].resize(i+1);
        pascal[i][0]=pascal[i][i]=1;

        for(int j=1;j < i ; j++)
            pascal[i][j]=pascal[i-1][j-1] + pascal[i-1][j];
        
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            cout<<pascal[i][j]<<' ';
        cout<<endl;
    }
}
