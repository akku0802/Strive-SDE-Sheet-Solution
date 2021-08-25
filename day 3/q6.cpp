//Reverse Pairs
//https://leetcode.com/problems/reverse-pairs/

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

int merge(vector<int> &nums, int low, int mid, int high)
{
    int count = 0;
    int j=mid+1;

    for(int i=low;i<=mid;i++)
    {
        while (j<=high && nums[i] > 2LL * nums[j])
        {
            j++;
        }
        count+=(j - (mid+1));
    }

    vector<int> temp;
    int left = low, right=mid+1;

    while (left<=mid && right <= high)
    {
        if(nums[left]<=nums[right])
            temp.push_back(nums[left++]);
        else    
            temp.push_back(nums[right++]);
    }

    while (left<=mid)   
    {
        temp.push_back(nums[left++]);
    }
    
    while (right <= high)   
    {
        temp.push_back(nums[right++]);
    }

    for(int i=low;i<=high;i++)
        nums[i]=temp[i-low];
    return count;
}

int reversepairs(vector<int> &nums,int low,int high)
{
    if(low>=high) return 0;

    int mid =low + (high - low)/2;

    int pairs = reversepairs(nums, low, mid);
    pairs += reversepairs(nums, mid+1, high);
    pairs += merge(nums, low, mid, high);
    
    return pairs;
}
void solve()
{
    int n;
    cin>>n;
    vector<int> nums;

    forn(n){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    //nums[i] > 2*nums[j]

    cout<<reversepairs(nums,0,nums.size()-1);
}