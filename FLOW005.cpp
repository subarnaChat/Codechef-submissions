#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,i;
    long int n;
    int xd[]={100,50,10,5,2,1};
    cin>>t;
    while(t--)
    {
        cin>>n;
        i=0,x=0;
        while(n>0)
        {
           x+=n/xd[i];
           n=n%xd[i];
           i++;
        }
        cout<<x<<endl;
    }
    return 0;
}