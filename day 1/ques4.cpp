//kaden's algo(max subarray sum)
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
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
void solve()
{
    ll n;
    cin>>n;
    ll a[n];

    forn(n)
        cin>>a[i];

    ll max_so_far = a[0];
    ll curr_sum = 0 ;
        
    for(int i=0; i<n; i++)
    {
        curr_sum += a[i]; 

        if(curr_sum < 0)
            curr_sum=0;
        max_so_far = max(max_so_far, curr_sum);
    }

    cout<<max_so_far;
}