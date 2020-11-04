#include <stdio.h>

int main(void) {
    unsigned long t,k,n,a[100001],i,sum;
    scanf("%lld %lld",&t,&k);
    while(t--)
    {
        sum=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            sum=sum+a[i];
        }
        if(sum>k)
        printf("FAILURE \n");
        else
        printf("SUCCESS \n");
    }
	// your code goes here
	return 0;
}

