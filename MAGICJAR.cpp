#include <bits/stdc++.h>
using namespace std;

int main() {
    long int t,n,a[100001],i,MAX;
    cin>>t;
    while(t--)
    {
        MAX=1;
        cin>>n;
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        {
            MAX+=a[i]-1;
        }
        cout<<MAX<<endl;
        
    }
	// your code goes here
	return 0;
}
