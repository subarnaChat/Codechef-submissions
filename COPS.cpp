#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,m,x,y,dis,i,j,max,min,c;
    cin>>t;
    while(t--)
    {
        max=0,min=0,c=0;
        cin>>m>>x>>y;
        dis=x*y;
        int a[m];
        int x[101]={0};
        for(i=0;i<m;i++)
        cin>>a[i];
        for(i=0;i<m;i++)
        {
            min=a[i]-dis;
            max=a[i]+dis;
            if(min<0)
            min=1;
            if(max>100)
            max=100;
            for(j=min-1;j<max;j++)
            x[j]=1;
        }
        for(i=0;i<100;i++)
        {
            if(!x[i])
            c++;
        }
        cout<<c<<endl;
    }
	// your code goes here
	return 0;
}
