#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,r,a[3],b[3],i;
    float s1,s2,s3;
    cin>>t;
    while(t--)
    {
        cin>>r;
        for(i=0;i<3;i++)
          cin>>a[i]>>b[i];
        s1=sqrt(pow(abs(a[0]-a[1]),2)+pow(abs(b[0]-b[1]),2));
        s2=sqrt(pow(abs(a[1]-a[2]),2)+pow(abs(b[1]-b[2]),2));
        s3=sqrt(pow(abs(a[2]-a[0]),2)+pow(abs(b[2]-b[0]),2));
        
        if(s1<=r && s2<=r)
        cout<<"yes"<<endl;
        else if(s2<=r && s3<=r)
        cout<<"yes"<<endl;
        else if(s1<=r && s3<=r)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
	// your code goes here
	return 0;
}
