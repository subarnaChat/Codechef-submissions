#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long int n,a[100001],possum,negsum,g1,g2,i;
    cin>>t;
    while(t--)
    {
        possum=0;
        negsum=0;
        g1=0;
        g2=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>0){
            possum+=a[i];g1++;}
            if(a[i]<0){
            negsum+=a[i];g2++;}
        }
        if(g1>g2 && g2!=0)
        cout<<g1<<" "<<g2<<endl;
        else if(g2>g1 && g1!=0)
        cout<<g2<<" "<<g1<<endl;
        else
        cout<<n<<" "<<n<<endl;
    }
	// your code goes here
	return 0;
}
