// Trapping Rain Water
// https://leetcode.com/problems/trapping-rain-water/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(n) for(int i=0; i<n; i++)
#define mod 1000000007
void solve();
int trap(vector<int>&) ;

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

    vector<int> height(n);

    forn(n)
        cin>>height[i];
    
    cout<<trap(height); 
}

int trap(vector<int>& height) 
{
    vector<int>left(height.size());
    vector<int>right(height.size());
        
    int max=height[0];
    int j=0;
    for(auto i:height)
    {
        if(i>max)
            max=i;
        left[j++]=max;
        // cout<<left[j-1]<<' ';
    }
    // cout<<'\n';
    max=height[height.size()-1];
    for(int i=height.size()-1; i>=0; i--)
    {
        if(height[i] > max)
            max=height[i];
        right[i]=max;
        // cout<<i<<' '<<right[i]<<' ';
    }
    
    int trap=0;
    
    for(int i=0;i<height.size();i++)
    {
        trap+=min(left[i],right[i]) - height[i];
    }
    
    return trap;
}
