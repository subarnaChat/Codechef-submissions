#include <iostream>
using namespace std;
int hcf(int a,int b)
{
    if(a==0)
    return b;
    if(b==0)
    return a;
    if(a==b)
    return a;
    if(a>b)
    return hcf(a-b,b);
    
    return hcf(a,b-a);
}

int main() {
    int t,n,i,lol[51],x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>lol[i];
        }
     x=hcf(lol[0],lol[1]);
     for(i=2;i<n;i++)
     {
         x=hcf(x,lol[i]);
     }
     for(i=0;i<n;i++)
     {
         cout<<lol[i]/x<<" ";
     }
     cout<<endl;
    }
	// your code goes here
	return 0;
}
