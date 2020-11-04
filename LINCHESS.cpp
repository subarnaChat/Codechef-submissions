#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll t,n,k,min,i;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    ll p[n];
	    for(i=0;i<n;i++)
	    cin>>p[i];
	    
	    min=INT_MAX;
	    for(i=0;i<n;i++){
	        if(k%p[i]==0){
	            if(k/p[i]<min)
	            min=p[i];
	        }
	    }
	    if(min==INT_MAX)
	    cout<<"-1"<<endl;
	    else
	    cout<<min<<endl;
	}
	return 0;
}
