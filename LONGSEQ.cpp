#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,i,c1,c2;
    string d;
    cin>>t;
    while(t--)
    {
    c1=0,c2=0;
        cin>>d;
        for(i=0;i<d.length();i++)
        {
            if(d[i]=='1')
            c1++;
            else
            c2++;
        }
        if(c1==1 || c2==1)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
	// your code goes here
	return 0;
}
