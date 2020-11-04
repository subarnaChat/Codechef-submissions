#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,i,max,min;
    string s1,s2;
    cin>>t;
    while(t--)
    {
        max=0,min=0;
        cin>>s1;
        cin>>s2;
        for(i=0;i<s1.length();i++)
        {
            if(s1[i]=='?' || s2[i]=='?')
            max++;
            else if(s1[i]!=s2[i])
            {
                min++;
                max++;
            }
        }
        cout<<min<<" "<<max<<endl;
    }
	// your code goes here
	return 0;
}
