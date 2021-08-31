//2 Sum problem
// https://leetcode.com/problems/two-sum/
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
vector<int> twosum(vector<int> nums,int target)
{
    vector<int > res;
    unordered_map <int ,int> hastable;
    for(int i=0; i<nums.size(); i++)
    {
        if(hastable.find(target-nums[i])!= hastable.end())
        {
            res.push_back(hastable[target-nums[i]]);
            res.push_back(i);
        }
        hastable[nums[i]]=i;
    }
    return res;
}

void solve()
{
    int n;
    cin>>n;

    vector<int> nums;
    forn(n)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int target;
    cin>>target;

    vector<int> res = twosum(nums,target);
    for(auto i: res)
        cout<<i<<' ';
}