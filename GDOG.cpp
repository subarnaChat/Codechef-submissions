#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,k,a[100001],i,*il;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=1;i<=k;i++)
        {
            a[i-1]=n-i*(n/i);
        }
        il=std::max_element(a,a+k);
        cout<<int(*il)<<endl;
    }
	// your code goes here
	return 0;
}
