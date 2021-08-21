//next permutation
// https://leetcode.com/problems/next-permutation/
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

    vector< int > num;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        num.push_back(x);
    }

    if(n == 1)
    {
        cout<<num[0];
        return;
    }    
    int idx1 , idx2;

    for(int i=n-2; i>=0; i--)
    {
        if(num[i] < num[i+1])
        {
            idx1=i;
            break;
        }
    }


    for(int i=n-1; i>=0; i--)
    {
        if( num[idx1] < num[i] )
        {
            idx2=i;
            break;
        }
    }
    swap(num[idx1] , num[idx2]);

    reverse( num.begin()+idx1+1 , num.end() );

    for(auto i: num)
        cout<<i<<" ";
}