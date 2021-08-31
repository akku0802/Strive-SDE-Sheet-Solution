//Longest Consecutive Sequence
//https://leetcode.com/problems/longest-consecutive-sequence/
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
    vector<int>nums;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }

    //now solution

    set<int>hash;

    for(auto i: nums)
        hash.insert(i);
    int maxcon=0;
    for(auto i: nums)
    {
        if(!hash.count(i-1))
        {
            int curr=i;
            int currmax=1;
            while (hash.count(curr+1))
            {
                curr++;
                currmax++;
            }

            maxcon = max(maxcon, currmax);
        }
    }
    cout<<maxcon;
}