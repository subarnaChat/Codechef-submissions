#include <iostream>
using namespace std;

int main() {
    int t;
    long int n,c,a[101],i,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n>>c;
        for(i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        }
        if(sum>c)
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
    }
	// your code goes here
	return 0;
}
