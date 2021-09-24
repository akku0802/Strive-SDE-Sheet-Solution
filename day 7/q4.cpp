//Remove Duplicates from Sorted Array
//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(n) for(int i=0; i<n; i++)
#define mod 1000000007
void solve();
int removeDuplicates(vector<int>&);
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

    cout<<removeDuplicates(num);
}

int removeDuplicates(vector<int>& nums) {
    
if(nums.size() == 0)
    return 0;
int i=0;    
for(int j=i+1;j<nums.size();j++){
    if(nums[i]==nums[j])
        continue;
    nums[++i]=nums[j];
}
return i+1;
}
