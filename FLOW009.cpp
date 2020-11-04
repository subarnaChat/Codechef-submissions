#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    double q,p;
    cin>>t;
    while(t--)
    {
        cin>>q>>p;
        if(q>1000)
        {
            cout<<fixed<<setprecision(6)<<q*p*0.9<<endl;
        }
        else
        cout<<fixed<<setprecision(6)<<q*p<<endl;
    }
	// your code goes here
	return 0;
}
