//Largest Subarray with 0 sum
//https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1
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
    forn(n)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    
    int sum=0,maxi=0;
    unordered_map <int ,int > mpp;
    for(int i=0; i<n; i++)
    {
        sum+=nums[i];
        if(sum == 0)
            maxi=i+1;
        else
        {
            if(mpp.find(sum) != mpp.end())
                maxi= max(maxi, i-mpp[sum]);
            else    
                mpp[sum] = i;
        }
    }
    cout<<maxi;
}