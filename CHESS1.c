#include <stdio.h>
int main(void) {
    int t;
    long long int n,i,sum;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%lld",&n);
        for( ;n>=1;n--)
        {
            sum=sum + (n*n);
        }
        printf("%lld \n",sum);
    }
	// your code goes here
	return 0;
}

