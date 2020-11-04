#include <iostream>
using namespace std;

int main() {
    long int n;
    int a[100001],b[100001],i,j;
    
    while(1)
    {
        cin>>n;
        if(n==0){
        break;}
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            b[a[i]]=i;
        }
        int flag=1;
        for(i=1;i<=n;i++)
        {
            if(a[i]!=b[i]){
            cout<<"not ambiguous"<<endl;
            flag=0;
            break;}
        }
        if(flag)
        cout<<"ambiguous"<<endl;
    }
        return 0;
}
        
        
