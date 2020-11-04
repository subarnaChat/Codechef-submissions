#include <bits/stdc++.h>
using namespace std;

int main() {
    long int t,n,a[100001],c,i,j;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        //for(i=0;i<n;i++)
        //{
            for(j=0;j<n;j++)
            {
                if(a[j]<=c)
                c++;
            }
        //}
        cout<<c<<endl;
    }
	// your code goes here
	return 0;
}
