#include <iostream>
using namespace std;

int main() {
    long long int n,k,r,c=0,i;
    cin>>n>>k>>r;
    for(i=1; ;i++)
    {
        k=k-r*i;
        c++;
        if(k<r*(i+1))
        break;
    }
    cout<<n-c<<endl;
	// your code goes here
	return 0;
}
