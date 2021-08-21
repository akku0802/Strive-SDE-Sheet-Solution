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
    int n,m;
    cin>>n>>m;
    
    int a[n],b[n];

    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    
    for(int i =0;i<n;i++)
    {
        int j=0;
        if(a[i] > b[j])
        {
            swap(a[i],b[j]);
            //reordering
            while(j<m-1)
            {
                if(b[j] < b[j+1])
                    break;
                swap(b[j],b[j+1]);
                j++;                  
            }
        } 
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;

    for(int i=0;i<m;i++)
        cout<<b[i]<<" ";
    cout<<endl;

}