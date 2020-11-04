#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,i,max,index,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int l[n],r[n];
        max=-1;
        for(i=0;i<n;i++)
        cin>>l[i];
        for(i=0;i<n;i++)
        cin>>r[i];
        for(i=0;i<n;i++)
        {
            if(l[i]*r[i]>max){
                max=l[i]*r[i];
                index=i+1;
            }
            else if((l[i]*r[i])==max){
                if(r[i]>r[index-1]){
                    max=l[i]*r[i];
                    index=index+1;
                }
            }
        }
        cout<<index<<endl;
    }
	// your code goes here
	return 0;
}
