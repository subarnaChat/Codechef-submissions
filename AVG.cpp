#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,k;
    long int sum,v,i,a[100001],x,y;
    //double x,y;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n>>k>>v;
        for(i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        }
        x=((v*(n+k)-sum)/k);
        y=((v*(n+k)-sum)%k);
        //cout<<x<<" "<<floor(x)<<endl;
        if(y!=0 || x<=0)
        cout<<-1<<endl;
        else
        cout<<x<<endl;
    }
	// your code goes here
	return 0;
}
