//Merge Overlapping Subintervals
// https://leetcode.com/problems/merge-intervals/
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

    vector<vector<int>> intervals,result;
    
    for(int i = 0;i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        intervals.push_back({a,b});
    }

    sort(intervals.begin(), intervals.end());
    vector<int> temp= intervals[0];
    if(intervals.size()==0)
        return ;
    
    for(auto i : intervals )
    {
        if( temp[1] >= i[0] )
            temp[1]= max(temp[1], i[1]);
        else
        {
            result.push_back(temp);
            temp= i;
        }
    }
    result.push_back(temp);

    
    for(auto it: result)
        cout<<it[0]<<" "<<it[1]<<"\n";
}