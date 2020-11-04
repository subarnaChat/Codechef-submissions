#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,i,j,k,c;
    string s,w;
        cin>>s;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>w;
            c=0;
            for(j=0;j<s.length();j++)
            {
                for(k=0;k<w.length();k++)
                {
                    if(s[j]==w[k])
                    c++;
                    //cout<<"s[j]:"<<s[j]<<" "<<"w[k]:"<<w[k]<<endl;
                }
            }
            //cout<<c<<" "<<w.length()<<endl;
            if(c==w.length())
            cout<<"Yes"<<endl;
            else
            cout<<"No"<<endl;
        }
	// your code goes here
	return 0;
}
