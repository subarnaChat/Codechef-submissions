#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    unsigned long long int a,b,x;
    cin>>t;
    while(t--)
    {
        //x=0;
        cin>>a>>b;
        if(b==0)
        cout<<"cannot distribute"<<endl;
        else
        {
            x=a/b;
            if(x>0)
            cout<<x<<endl;
            else
            cout<<"cannot distribute"<<endl;
        }
    }
	// your code goes here
	return 0;
}
