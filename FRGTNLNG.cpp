#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,t,n,k,j,l,z;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string s[n],m;
        int c[n];
        for(i=0;i<n;i++){
            c[i]=0;
            cin>>s[i];}
        for(i=0;i<k;i++)
        {
            cin>>l;
            for(j=0;j<l;j++)
            {
                cin>>m;
                for(z=0;z<n;z++){
                if(s[z]==m)
                c[z]=1;}
            }
        }
        for(i=0;i<n;i++)
        {
            if(c[i]==1)
            cout<<"YES"<<" ";
            else
            cout<<"NO"<<" ";
        }
        cout<<endl;
    }
	// your code goes here
	return 0;
}
