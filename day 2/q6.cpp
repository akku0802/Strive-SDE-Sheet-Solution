// Rotate Image
// https://leetcode.com/problems/rotate-image/
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

    vector< vector<int> > matrix;

    for(int i=0;i<n;i++)
    {
        vector<int>a;
        for(int j=0; j<n; j++ )
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        matrix.push_back(a);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
            swap(matrix[i][j],matrix[j][i]);
        
    }

    for(int i=0;i<n;i++)
        reverse(matrix[i].begin(), matrix[i].end());

    for(auto i: matrix)
    {
        for(auto j: i)
            cout<<j<<' ';
        cout<<"\n";
    }

}