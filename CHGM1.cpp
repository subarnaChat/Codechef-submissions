#include<bits/stdc++.h> 

using namespace std; 
  
long int maxSubArraySum(long int a[],long int size) 
{ 
    long int max_so_far = LONG_MIN, max_ending_here = 0; 
  
    for (long int i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    return max_so_far; 
} 

int main() 
{ 
    int t;
    long int n,a[100001],i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        cin>>a[i];
        cout<<maxSubArraySum(a,n)<<endl;
    }
    return 0; 
} 
