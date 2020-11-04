#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long int n,ti[100001],i,res;
    cin>>t;
    while(t--)
    {
        res=0;
        cin>>n;
        for(i=0;i<n;i++)
        cin>>ti[i];
        for(i=0;i<n;i++)
        {
            res=res^ti[i];
        }
        cout<<res<<endl;
    }
	// your code goes here
	return 0;
}
