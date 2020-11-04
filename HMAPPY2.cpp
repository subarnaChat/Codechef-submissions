#include <iostream>
using namespace std;
#include <boost/math/common_factor.hpp> 
int main() {
    int t;
    long long int n,x,k,c,d,e,l,a,b;
    //long double a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>k;
        l=boost::math::lcm(a,b);
        c=n/a;
        d=n/b;
        e=(n/l)*2;
        x=c+d-e;
        if(x>=k)
        cout<<"Win"<<endl;
        else
        cout<<"Lose"<<endl;
    }
	// your code goes here
	return 0;
}
