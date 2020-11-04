#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,i;
    string s,s1,s2;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int l=s.length();
        //cout<<l<<endl;
        if(l%2==0){
            s1=s.substr(0,(l/2));
            s2=s.substr((l/2),l);
        }
        else{
        s1=s.substr(0,(l/2));
        s2=s.substr((l/2)+1,l);
        }
        //cout<<s1<<" "<<s2<<endl;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        //cout<<s1<<" "<<s2<<endl;
        if(s1==s2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	// your code goes here
	return 0;
}
