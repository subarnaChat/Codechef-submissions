#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,i,flag;
    string s;
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='I')
            {
                cout<<"INDIAN"<<endl;
                flag=1;
                break;
            }
            else if(s[i]=='Y')
            {
                cout<<"NOT INDIAN"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        cout<<"NOT SURE"<<endl;
    }
	// your code goes here
	return 0;
}
