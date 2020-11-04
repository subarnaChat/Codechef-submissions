#include <iostream>
using namespace std;

int main() {
    int t,b,ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>b;
        while(b>2)
        {
            ans+=(b-2)/2;
            b=b-2;
        }
        cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}
