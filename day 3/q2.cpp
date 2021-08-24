// Pow(x, n)
// https://leetcode.com/problems/powx-n/
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
    double x,ans=1.0;
    int n;
    cin>>x>>n;

    long long temp = n;
    if(temp < 0) temp = -1 * temp;

    while(temp)
    {
        if(temp % 2)
        {
            ans = ans*x;
            temp--;
        }
        else
        {
            x*=x;
            temp/=2;

        }
    }
    
    if(n<0)
    ans = (double) (1.0)/ (double)ans;
    cout<<ans;
}