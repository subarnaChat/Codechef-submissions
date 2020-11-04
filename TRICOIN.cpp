#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long int n,i,c;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        i=1;
        while(n>=0)
        {
            n=n-i;
            i++;
            c++;
        }
        cout<<c-1<<endl;
    }
	// your code goes here
	return 0;
}
