//Sort an array of 0’s 1’s 2’s without using extra space or sorting algo 

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n ; i++)
        cin>>a[i];

    int low=0, mid=0, high=n-1;

    while (mid < high)
    {
        if(a[mid] == 0)
            swap(a[low++] ,a[mid++]);
        else if (a[mid] == 1)   
            mid++;
        else 
            swap(a[mid],a[high--]);
    }

     for(int i=0; i<n ; i++)
        cout<<a[i]<<" ";

    return 0;
}