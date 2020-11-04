#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,a[101],d[101],best[101],i,j,MAX;
    cin>>t;
    while(t--)
    {
        MAX=-1;
        cin>>n;
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        cin>>d[i];
        j=0;
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                if(d[i]>(a[1]+a[n-1])){
                    best[j]=d[i];
                    j++;
                }
            }
            else if(i==n-1)
            {
                if(d[i]>(a[0]+a[n-2])){
                    best[j]=d[i];
                    j++;
                }
            }
            else
            {
                if(d[i]>(a[i-1]+a[i+1]))
                {
                    best[j]=d[i];
                    j++;
                }
            }
        }
        for(i=0;i<j;i++)
        {
            if(best[i]>MAX)
            MAX=best[i];
        }
        cout<<MAX<<endl;
    }
	// your code goes here
	return 0;
}
