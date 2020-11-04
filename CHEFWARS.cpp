#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	
	ll t,h,p;
	int flag;
	cin>>t;
	while(t--){
	    flag=0;
	    cin>>h>>p;
	    while(h>0 && p>0){
	        h=h-p;
	        p=p/2;
	        if(h<=0)
	        flag=1;
	        else if(p<=0)
	        flag=0;
	    }
	    cout<<flag<<endl;
	}
	return 0;
}
