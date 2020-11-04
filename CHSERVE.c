#include <stdio.h>

int main(void) {
    long long int t,k,p1,p2,n,c;
    scanf("%lld",&t);
    while(t--)
    {
        c=0;
        scanf("%lld %lld %lld",&p1,&p2,&k);
        n=p1+p2;
        while(n>=k)
        {
            n=n-k;
            c++;
        }
        if(c%2==0)
        printf("CHEF \n");
        else
        printf("COOK \n");
    }
	// your code goes here
	return 0;
}

