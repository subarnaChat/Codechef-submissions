#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll t,pc,pr,pc_min,pr_min;
	cin>>t;
	while(t--){
	    cin>>pc>>pr;
	    pc_min=(pc%9==0)?(pc/9):(pc/9)+1;
	    pr_min=(pr%9==0)?(pr/9):(pr/9)+1;
	    if(pc_min<pr_min)
	    cout<<"0"<<" "<<pc_min<<endl;
	    else if(pr_min<pc_min)
	    cout<<"1"<<" "<<pr_min<<endl;
	    else
	    cout<<"1"<<" "<<pr_min<<endl;
	    
	}
	return 0;
}
