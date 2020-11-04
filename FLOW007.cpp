#include <iostream>
using namespace std;

int main() {
    int t;
    long int n,dig,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        while(n>0)
        {
            dig=n%10;
            n=n/10;
            sum=(sum*10)+dig;
        }
        cout<<sum<<endl;
    }
	// your code goes here
	return 0;
}
