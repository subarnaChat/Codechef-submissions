#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,i,x;
    string s1,s2;
    cin>>t;
    while(t--)
    {
        x=0;
        cin>>s1;
        cin>>s2;
        for(i=0;i<s1.length();i++)
        {
            if(s1[i]!=s2[i] && (s1[i]!='?' && s2[i]!='?')){
            x=1;break;}
        }
        if(x==0)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
	// your code goes here
	return 0;
}
