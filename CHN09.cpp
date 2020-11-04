#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,i,a,b;
    string s;
    cin>>t;
    while(t--)
    {
        a=0,b=0;
        cin>>s;
        n=s.length();
        for(i=0;i<n;i++)
        {
            if(s[i]=='a')
            a++;
            else
            b++;
        }
        if(a==b)
        cout<<a<<endl;
        else if(a>b)
        cout<<b<<endl;
        else
        cout<<a<<endl;
    }
	// your code goes here
	return 0;
}
