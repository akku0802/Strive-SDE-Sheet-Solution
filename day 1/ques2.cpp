// Find the repeating and the missing
// 1 2 3 3 5 6
// r3 m4

#include <bits/stdc++.h>

using namespace std;

int main()
{
        int n;
    cin>> n;

    int a[n];
    
    int s=0 , s2=0 ;

    for(int i=0; i< n; i++)
    {
        cin>>a[i];
        s += a[i];// 17
        s2 += a[i]*a[i];// 67 
    }

    int os  = ( n * (n+1)) / 2; //21
    int os2 = ( n * (n+1) * (2*n + 1) ) / 6; // 91
    int x = ( (os -s) + ( (os2 - s2) / (os -s) ) ) / 2 ;
    int y = ( (os2 - s2) / (os -s) ) - x;
    
    cout<< abs(x)<< " "<< abs(y)<<"\n";
    

    return 0;
}