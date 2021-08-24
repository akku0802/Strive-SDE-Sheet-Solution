//Search in 2D-MATRIX
// https://leetcode.com/problems/search-a-2d-matrix/
// https://www.geeksforgeeks.org/search-in-row-wise-and-column-wise-sorted-matrix/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define form(m) for(int i=0; i<m; i++)
#define forn(n) for(int j=0; j<n; j++)
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
    int m,n; 
    cin>>m>>n;

    int mat[m][n];
    form(m)
        forn(n)
            cin>>mat[i][j];
    int target;
    cin>>target;
    
    int low=0,mid;
    int high=m*n-1;

    while(low <= high)
    {
        mid = low + ((high - low) /2);

        if(mat[mid/m][mid%m] == target)
        {
            cout<<"true";
            break;
        }
        else if(target < mat[mid/m][mid%m])
            high = mid-1;
        else    
            low = mid+1;
    }

    if(low>high)
    cout<<"false";
}