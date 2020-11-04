#include <bits/stdc++.h>
#include<string>
using namespace std; 
  
const int MAX_CHAR = 26; 
  int c;
void commonCharacters(string str[], int n) 
{ 
    bool prim[MAX_CHAR]; 
    memset(prim, true, sizeof(prim)); 
 
    for (int i = 0; i < n; i++) { 
  
        bool sec[MAX_CHAR] = { false }; 
  
        for (int j = 0; str[i][j]; j++) { 
  
            if (prim[str[i][j] - 'a']) 
                sec[str[i][j] - 'a'] = true;  
        } 
 
        memcpy(prim, sec, MAX_CHAR); 
    } 
  
    for (int i = 0; i < 26; i++) 
        if (prim[i]) 
            c++;
            
    cout<<c<<endl;
} 
  
int main()
{
    int t,n,i,x;
    string str[1001];
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
        cin>>str[i];
        }
        commonCharacters(str, n); 
    }
    return 0;
}