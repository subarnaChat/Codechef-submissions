#include <bits/stdc++.h>
using namespace std;
int u,inter;
void printUnion(int arr1[], int arr2[], int m, int n) 
{ 
  int i = 0, j = 0; 
  while (i < m && j < n) 
  { 
    if (arr1[i] < arr2[j]) {
       //cout << arr1[i++] << " ";
       i++;
       u++;
      }
    else if (arr2[j] < arr1[i]){ 
       //cout << arr2[j++] << " ";
       j++;
       u++;
       }
    else
    { 
       //cout << arr2[j++] << " "; 
       j++;
       i++; u++;inter++;
    } 
  } 
  while(i < m){ 
     //cout << arr1[i++] << " "; 
     i++;
     u++;}
  while(j < n){ 
    //cout << arr2[j++] << " ";
    j++;
    u++;}
  }


int main() {
    int t,n,m,k,i;
    cin>>t;
    while(t--)
    {
        u=0,inter=0;
        cin>>n>>m>>k;
        int a[m],b[k];
        for(i=0;i<m;i++)
        cin>>a[i];
        for(i=0;i<k;i++)
        cin>>b[i];
        sort(a,a+m);
        sort(b,b+k);
        printUnion(a,b,m,k);
        //cout<<endl;
        cout<<inter<<" "<<(n-u)<<endl;
    }
    
	// your code goes here
	return 0;
}
