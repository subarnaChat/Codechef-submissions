#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long int x,y,side;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        side=__gcd(x,y);
        cout<<(x*y)/(side*side)<<endl;
    }
	// your code goes here
	return 0;
}
