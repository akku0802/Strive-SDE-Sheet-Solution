// Set Matrix Zeros
// https://leetcode.com/problems/set-matrix-zeroes/
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

vector<vector<int>> setzero(vector<vector<int>> a)
{
    vector<int> col (a[0].size(),-1);
    vector<int> row (a.size(),-1);

    for(int i = 0; i < a.size(); i++)
    {
        for(int j = 0; j < a[0].size(); j++)
        {
            if( a[i][j] == 0)
            {
                col[j]=0;
                row[i]=0;
            }
        }
    }

    for(int i = 0; i < a.size(); i++)
    {
        for(int j = 0; j < a[0].size(); j++)
        {
            if( col[j] == 0 || row[i] == 0)
                a[i][j] = 0;
        }
    }
    return a;
} 

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>a(n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int x;
            cin>>x;
            a[i].push_back(x);
        }
    }

    vector<vector<int>> matrix = setzero(a);
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
}