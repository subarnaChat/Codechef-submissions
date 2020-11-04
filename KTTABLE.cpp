#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,i,count;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n;
        long int a[n],b[n],c[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        cin>>b[i];
        c[0]=a[0];
        for(i=1;i<n;i++)
        {
            c[i]=a[i]-a[i-1];
        }
        for(i=0;i<n;i++)
        {
            if(c[i]>=b[i])
            count++;
        }
        cout<<count<<endl;
    }
	// your code goes here
	return 0;
}
