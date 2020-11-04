#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long int a[n],l[n+1];
        std::fill_n(l,n,1);
        for(i=0;i<n;i++)
        cin>>a[i];
        l[n]=1;
        for(i=n-2;i>=0;i--){
            if((a[i]*a[i+1])<0)
            l[i]=l[i]+l[i+1];}
            
        for(i=0;i<n;i++)
        cout<<l[i]<<" ";
        cout<<endl;
    }
	// your code goes here
	return 0;
}
