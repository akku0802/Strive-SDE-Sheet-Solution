// Find the duplicate in an array of N+1 integers.
// https://leetcode.com/problems/find-the-duplicate-number/

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

    int t;
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

    vector<int> a(n);

    for(int i =0;i<n;i++)
    cin>>a[i];
    
    int fast= a[0];
    int slow= a[0];

    do{
        slow= a[slow];
        fast= a[a[fast]];
    }while(slow!=fast);

    slow=a[0];

    do
    {
        slow=a[slow];
        fast=a[fast];
    } while (slow!=fast);
    
    cout<<slow;
}