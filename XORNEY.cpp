#include <iostream>
using namespace std;

long long buzz(long long n)
{
    if(n%4==0)
    return n;
    else if(n%4==1)
    return 1;
    else if(n%4==2)
    return n+1;
    else if(n%4==3)
    return 0;
}
int main() {
   long long int t,l,r,x;
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        x=buzz(r)^buzz(l-1);
        if(x%2==0)
        cout<<"Even"<<endl;
        else
        cout<<"Odd"<<endl;
    }
    return 0;
}
        
        
