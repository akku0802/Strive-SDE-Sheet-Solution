//Majority Element II
// https://leetcode.com/problems/majority-element-ii/
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

    int nums[n];
    forn(n)
        cin>>nums[i];
        
    int count1=0,count2=0;
    int ele1=-1;
    int ele2=-1;

    forn(n)
    {
        if( ele1 == nums[i] )
            count1++;
        else if( ele2 == nums[i] )
            count2++;
        else if(count1 == 0)
        {
            ele1 = nums[i];
            count1 =1;
        }
        else if(count2 == 0)
        {    
            ele2 = nums[i];
            count2 =1;
        }
        else
        {
            count1--;
            count2--;
        }
    }
    vector<int>ans;
    count1=count2=0;
    forn(n)
    {
        if(nums[i]==ele1)
            count1++;
        else if(nums[i]==ele2)
        count2++;
    }

    if(count1 > n/3)
        ans.push_back(ele1);
    if (count2 > n/3)
        ans.push_back(ele2);
    
    for(auto i: ans)
        cout<<i<<" ";
}