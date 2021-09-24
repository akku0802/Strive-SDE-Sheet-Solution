//Max Consecutive Ones
//https://leetcode.com/problems/max-consecutive-ones/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(n) for(int i=0; i<n; i++)
#define mod 1000000007
void solve();
int findMaxConsecutiveOnes(vector<int>& );
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
    
    vector<int>num(n);
    forn(n)
        cin>>num[i];

    cout<<findMaxConsecutiveOnes(num);
}

int findMaxConsecutiveOnes(vector<int>& nums) {

    int maxi=0,cnt=0;
    
    for(int j=0;j<nums.size();j++)
    {
        if(nums[j] == 1)
        {
            cnt++;
        }
        else
            cnt=0;
        maxi=max(maxi, cnt);
    }
    return maxi;        
}