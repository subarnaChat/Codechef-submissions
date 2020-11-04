#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

int main() {
    long int t,n,i,min;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        cin>>arr[i];
        min=arr[0];
        for(i=1;i<n;i++)
        {
           if(arr[i]<min)
           min=arr[i];
        }
        cout<<min*(n-1)<<endl;
    }
	// your code goes here
	return 0;
}
