#include <stdio.h>
#include<iostream>
using namespace std;
int main() {
    int a[] = {1,2,4,8,16,32,64,128,256,512,1024,2048};
    int t, n, i,c, currPrice, divideTimes;
    cin>>t;
    while(t--) {
        i = 11;
        c = 0;
        cin>>n;
        while(i >= 0) {
            currPrice = a[i];
            if (n >= currPrice) {
                divideTimes = n / currPrice;
                c += divideTimes;
                n = n - (divideTimes * currPrice);
            }                 
            i--;
        }
        cout<<c<<endl;
    }
    return 0;
}

