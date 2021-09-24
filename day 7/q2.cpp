//3SUM
//https://leetcode.com/problems/3sum/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(n) for(int i=0; i<n; i++)
#define mod 1000000007
void solve();
vector<vector<int>> threeSum(vector<int>& nums);

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
    vector<int>nums(n);

    forn(n)
        cin>>nums[i];

    vector<vector<int>> res = threeSum(nums);

    for(auto i : res)
        cout<<i[0]<<' '<<i[1]<<' '<<i[2]<<'\n';
    return;
}


vector<vector<int>> threeSum(vector<int>& nums) {
    
    sort(nums.begin(), nums.end());
    
    vector<vector<int>> ans;
        
    for(int i=0;i<(int)(nums.size())-2; i++)
    {
        if(i==0 || (i>0 && nums[i] != nums[i-1]))
        {
            int low=i+1, high=(int)(nums.size())-1, sum=0-nums[i];
            
            while(low<high)
            {
                if(nums[low]+ nums[high] == sum )
                {    
                    vector<int>temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[low]);
                    temp.push_back(nums[high]);
                    ans.push_back(temp);

                    while(low < high && nums[low] == nums[low+1])low++;
                    while(low < high && nums[high] == nums[high-1])high--;

                    low++;
                    high--;
                }
                else if(nums[low] + nums[high] < sum) low++;
                else high--;
            }
        }
    }
    return ans;
}
