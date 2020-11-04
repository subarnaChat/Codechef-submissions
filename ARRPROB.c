#include <stdio.h>

int main(void) {
	int t;
	long long int n,a[100001],i,j,sum;
	scanf("%d",&t);
	while(t--)
	{
	    sum=0;
	    scanf("%lld",&n);
	    for(i=0;i<n;i++)
	    {
	        scanf("%lld",&a[i]);
	        sum=sum+a[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        printf("%lld ",(sum-a[i]));
	    }
	    
	    printf("\n");
	    
	}
	return 0;
}

