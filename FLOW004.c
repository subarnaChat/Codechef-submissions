#include <stdio.h>

int main(void) {
    int t,first,sum,dig;
    long long int n,m;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%lld",&n);
        m=n;
        dig=n%10;
        while(m>=10)
        m=m/10;
        sum=dig+m;
        printf("%d \n",sum);
    }
	// your code goes here
	return 0;
}

