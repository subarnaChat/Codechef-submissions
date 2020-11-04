#include <bits/stdc++.h>
using namespace std;

int countDistinct(int arr[], int n) 
{ 
    int res = 1; 
    for (int i = 1; i < n; i++) { 
        int j = 0; 
        for (j = 0; j < i; j++) 
            if (arr[i] == arr[j]) 
                break; 
        if (i == j) 
            res++; 
            //cout<<arr[i]<<" ";}
    }
    return res; 
} 
int main() {
    int t,n,a[101];
    long int x,c,i,j;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        a[0]=x;
        cin>>s;
        j=1;
        for(i=0;i<n;i++)
        {
            if(s[i]=='L'){
            x=x-1;a[j]=x;j++;}
            else if(s[i]=='R'){
                x=x+1;a[j]=x;j++;
            }
        }
        //for(i=0;i<j;i++)
        //cout<<a[i]<<" ";
        cout<<countDistinct(a,j)<<endl;
        //countDistinct(a,j);
    }
	// your code goes here
	return 0;
}
