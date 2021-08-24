// Majority Element
// https://leetcode.com/problems/majority-element/
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

    int nums[n];
    forn(n)
        cin>>nums[i];
        
    int count=0;
    int ele=0;

    forn(n)
    {
        if(count == 0)
            ele =nums[i];
        else if( ele == nums[i])
            count++;
        else
            count--;
    }
    cout<<ele;
}