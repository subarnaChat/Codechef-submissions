#include <stdio.h>

int main(void) {
	int t;
	long long int n,i,c,m;
	scanf("%d",&t);
	while(t--)
	{
	    
	    i=1;
	    scanf("%lld",&n);
	    if(n!=0){
	    c=0;
	    for(i=1;i<=n;i++)
	    {
	
	       n=n-i;
	       c++;
	    }
	    if(n==0)
	    printf("%lld \n",c);
	    else 
	    printf("-1 \n");
	   }
	   else
	   printf("-1 \n");
	}
	return 0;
}

