#include <stdio.h>

int main(void) {
	int t,c;
	long long int x;
	scanf("%d",&t);
	while(t--)
	{
	    c=0;
	    scanf("%lld",&x);
	    while(x%10 !=0)
	    {
	        if(x%5==0 )
	        {
	         x=x*2;
	         c++;
	        }
	        else
	        {
	        	c=-1;
	        	break;
			}
	    }
	    printf("%d\n",c);
	    
	}
	return 0;
}