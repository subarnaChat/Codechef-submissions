#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long int n,i,j,c,l,sub;
    char ch;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n]={0};
        cin>>s>>ch;
        c=0;
        sub=n*(n+1)/2;
        j=0;
        for(i=0;i<n;i++)
        {
            if(s[i]!=ch)
            arr[j]++;
            else
            {
                c++;
                j++;
            }
        }
        for(i=0;i<n;i++)
        {
            //cout<<arr[i]<<endl;
            sub=sub-((arr[i]*(arr[i]+1))/2);
        }
        cout<<sub<<endl;
    }
	// your code goes here
	return 0;
}
