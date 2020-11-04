#include <iostream>
using namespace std;
#include<math.h>
int main() {
    int t,a,b,c,max;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if((a>b && a<c) || (a>c && a<b))
          max=a;
        else if((b>a && b<c) || (b>c && b<a))
          max=b;
        else if((c>a && c<b) || (c>b && c<a))
          max=c;
        cout<<max<<endl;
    }
	// your code goes here
	return 0;
}
