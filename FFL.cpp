#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,s,i,j,min_0,min_1;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        int a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            cin>>b[i];
        }
        int cost=100-s;
        min_0=999,min_1=999;
        for(i=0;i<n;i++){
            if(b[i]==0){
                if(a[i]<=min_0)
                min_0=a[i];
            }
            else{
                if(a[i]<=min_1)
                min_1=a[i];
            }
        }
        if((min_0+min_1)<=cost)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
	// your code goes here
	return 0;
}
