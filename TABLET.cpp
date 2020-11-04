#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,flag;
    long int p[101],w[101],h[101],i,b,n,max;
    cin>>t;
    while(t--)
    {
        flag=0;
        max=0;
        cin>>n>>b;;
        for(i=0;i<n;i++)
        {
            cin>>w[i]>>h[i]>>p[i];
        }
        for(i=0;i<n;i++)
        {
            if(p[i]<=b)
            {
                if(w[i]*h[i]>max)
                max=w[i]*h[i];
                flag=1;
            }
        }
        if(flag==0)
        cout<<"no tablet"<<endl;
        else
        cout<<max<<endl;
    }
	// your code goes here
	return 0;
}
