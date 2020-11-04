#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,f,i,j,index;
    cin>>t;
    while(t--)
    {
        index=0;
        cin>>n;
        int s1[n];
        for(i=0;i<n;i++)
        cin>>s1[i];
        cin>>f;
        int s2[f];
        for(i=0;i<f;i++)
        cin>>s2[i];
        for(i=0;i<f;i++)
        {
            for(j=0;j<n;j++)
              {
                  if(s1[j]==s2[i]){
                  index++;
                  break;}
              }
        }
        if(index==f)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
	// your code goes here
	return 0;
}
