#include<bits/stdc++.h>
using namespace std;
long long int n,i,k,s,a[1000006];
int main() 
{
	    scanf("%lld",&n);
	    s=0;
	    for(i=0;i<n;i++)
	    {
	       scanf("%lld",&a[i]);
	       s=max(s,a[i]);
	    }
	    k=0;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]<s)
	        k=max(k,a[i]);
	    }
	    printf("%lld\n",k);
	//}
	return 0;
}
