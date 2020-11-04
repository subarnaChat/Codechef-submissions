#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,m,n,k,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        //if(abs(m-n)==k)
        //d=0;
        if(abs(m-n)>k)
        d=abs(m-n)-k;
        else
        d=0;
        
        cout<<d<<endl;
    }
	// your code goes here
	return 0;
}
