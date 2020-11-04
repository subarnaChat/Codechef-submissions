#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t--){
        long k,i;
        cin>>n>>k;
        long d[n];
        int a[n];
        for(i=0;i<n;i++)
        cin>>d[i];
        
        for(i=0;i<n;i++){
            if(d[i]%k==0){
                //cout<<"hi"<<endl;
            a[i]=1;}
            else
            a[i]=0;
        }
        
        for(i=0;i<n;i++)
        cout<<a[i];
        cout<<endl;
    }
    
	// your code goes here
	return 0;
}
