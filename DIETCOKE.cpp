#include <bits/stdc++.h>
using namespace std;
long long gcd(long long int a,long long int b) 
{ 
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
    if (a == b) 
        return a; 
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
} 
int main() {
    int t;
    long long int n,m;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        cout<<(m+n-gcd(m,n))<<endl;
    }
	// your code goes here
	return 0;
}
