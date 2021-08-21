// Count Inversions in an array  (Using Merge Sort)
// https://www.geeksforgeeks.org/counting-inversions/
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

int merge(int arr[], int temp[], int left,int mid, int right)
{
    int i,j,k;
    int count=0;
    
    i=left;
    j=mid;
    k=left;

    while((i<=mid-1) && (j<=right))
    {
        if(arr[i]<arr[j])
        {
            temp[k++]=arr[i++];
        }
        else{
            temp[k++] = arr[j++];

            count = count+ (mid-i);
        }
    }

    while (i<=mid-1)    
    {
        temp[k++]=arr[i++];
    }
    

    while (j<=right)    
    {
        temp[k++]=arr[j++];
    }

    for(int i=left ; i<=right; i++ )
        arr[i]=temp[i];

    return count;
}
int _mergesort(int arr[], int temp[], int left, int right)
{
    int mid , count=0;

    if(right > left )
    {
        mid = (left+right) / 2;
        count += _mergesort(arr,temp,left, mid);
        count += _mergesort(arr,temp,mid+1, right);

        count += merge(arr, temp, left ,mid+1 ,right);
    }

    return count;
}
void solve()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];


    //brut-force approch O(n^2)
    // int count =0;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j= i+1; j<n ; j++)
    //     {
    //         if(arr[i] > arr[j])
    //         count++;
    //     }
    // }
    // cout<<count;

    //Using merge sort
    int temp[n];

    int ans= _mergesort(arr,temp,0, n-1);

    cout<<ans;
    
}