#include <iostream>
using namespace std;
#define MAX 1000000007
int main() {
    long long int n,sum=1,i;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        sum=(sum*a[i])%MAX;
    }
    cout<<sum;
	// your code goes here
	return 0;
}
