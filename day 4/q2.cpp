//4 SUM
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
    int n,target;
    cin>>n;

    vector<int>nums(n);

    forn(n)
        cin>>nums[i];
    
    cin>>target;
    
    //4sum algo using 2 pointer
    //sort the array
    //i, j, left, right
    //skip duplicats

    sort(nums.begin(), nums.end());

    vector<vector<int>>res;
    int sum=0,left,right;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int target2 = target - nums[j]-nums[i];
            sum=nums[i]+nums[j];
            left=j+1;
            right=n-1;

            while(left < right)
            {
                int two_sum = nums[left] + nums[right];

                if(two_sum < target2) left++;
                else if(two_sum > target2) right--;
                else
                {
                    int l=nums[left];
                    int r=nums[right]; 
                    res.push_back({nums[i], nums[j],nums[left], nums[right]});

                    while (left < right && nums[left]==l) left++;
                    while (left < right && nums[right]==r) right--;
                }
            }
            
            while (j+1 < n && nums[j+1]==nums[j]) j++;

        }
            while (i+1 < n && nums[i+1]==nums[i]) i++;
    }

    for(auto i: res)
    {
        for(auto j: i)
            cout<<j<<' ';
        cout<<"\n";
    }
}