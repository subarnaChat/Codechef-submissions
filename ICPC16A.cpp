#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x1,x2,y1,y2;
    cin>>t;
    while(t--)
    {
       cin>>x1>>y1>>x2>>y2;
           if(x2>x1 && y2==y1)
           cout<<"right"<<endl;
           else if(y2>y1 && x1==x2)
           cout<<"up"<<endl;
           else if(x2<x1 &&y2==y1)
           cout<<"left"<<endl;
           else if(y2<y1 && x1==x2)
           cout<<"down"<<endl;
           else
           cout<<"sad"<<endl;
    }
	// your code goes here
	return 0;
}
