#include <iostream>
using namespace std;
#include<math.h>
int main() {
    int t,a,b,min;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        min=a>b?a:b;
        cout<<min<<" "<<a+b<<endl;
    }
	// your code goes here
	return 0;
}
