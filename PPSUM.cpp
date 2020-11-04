#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,d,n,i,sum;
    cin>>t;
    while(t--)
    {
        //sum=0;
        cin>>d>>n;
        sum=n*(n+1)/2;
        //cout<<sum<<endl;
        for(i=2;i<=d;i++)
        {
            sum=(sum*(sum+1))/2;
        }
        cout<<sum<<endl;
        
    }
	// your code goes here
	return 0;
}
