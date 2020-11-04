#include <bits/stdc++.h>
using namespace std;
#include<vector>
#include<algorithm>
#include<numeric>
int sum(int a[],int n)
{
    int sum=0,i;
    for(i=0;i<n;i++)
    sum+=a[i];
    return sum;
}
int main() {
    int t,n,m,i,j,flag;
    string s1;
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>s1;
        n=s1.length();
        vector<char> s2;
        std::copy(s1.begin(),s1.end(),std::back_inserter(s2));
        sort(s2.begin(),s2.end());
        s2.erase(unique(s2.begin(),s2.end()),s2.end());
         m=s2.size();
        int occur[m]={0};
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(s2[i]==s1[j])
                occur[i]+=1;
            }
        }
        for(i=0;i<n;i++)
        {
            if(occur[i]==sum(occur,m)-occur[i]){
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
	// your code goes here
	return 0;
}
