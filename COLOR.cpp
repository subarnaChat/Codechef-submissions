#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long int n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        //j=0;
        long int r[3]={0};
        for(i=0;i<n;i++)
        {
            if(s[i]=='R')
            r[0]++;
            else if(s[i]=='G')
            r[1]++;
            else if(s[i]=='B')
            r[2]++;
        }
        sort(r,r+3);
        cout<<(n-r[2])<<endl;
    }
	// your code goes here
	return 0;
}
