#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,i,j,sum,product,count;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n;
        long a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        {
            product=a[i];
            sum=a[i];
            for(j=i+1;j<n;j++)
            {
              if(product==sum)
              count++;
              product*=a[j];
              sum+=a[j];
            }
            if(product==sum)
            count++;
        }
        cout<<count<<endl;
    }
	// your code goes here
	return 0;
}
