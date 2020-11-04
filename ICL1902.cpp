#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,i,j,c;
    int a[]={961,900,841,784,729,676,625,576,529,484,441,400,361,324,289,256,225,196,169,144,121,100,81,64,49,36,25,16,9,4,1};
    cin>>t;
    for(j=0;j<t;j++)
    {
        c=0;i=0;
        cin>>n;
       do
        {
            if(n>=a[i])
            {
                n=n-a[i];//cout<<n<<endl;
                c++;
            }
            if(n<a[i])
            i++;
        }
        while(n>0);
        cout<<c<<endl;
    }
	// your code goes here
    return 0;
}
