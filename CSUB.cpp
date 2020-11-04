#include <bits/stdc++.h>
using namespace std;

int main() {
    long int t,i,n,c;
    string s;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            c++;
        }
        cout<<(c*(c+1))/2<<endl;
    }
	// your code goes here
	return 0;
}
