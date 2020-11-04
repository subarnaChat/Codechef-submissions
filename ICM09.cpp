#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,i,c,d,x,o,z;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        c=0,d=0,x=0,o=0,z=0;
       for(i=0;i<n;i++)
       {
        if(s[i]=='1')
            c++;
        else
            d++;
       
       if(c<d)
       {
           c++;
           d--;
           x++;
       }}
       cout<<x<<endl;
    }
	// your code goes here
	return 0;
}
