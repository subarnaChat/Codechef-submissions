#include <stdio.h>

int main(void) {
    int t,dig;
    long long int n,i,m,x,c,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%lld",&n);
        for(i=n+1; ;i++)
        {
            c=0;
        	m=i;
        	while(m>0)
        	{
        		dig=m%10;
        		if(dig==3)
        		c++;
        		m=m/10;
			}
			if(c>=3){
			printf("%lld \n",i);
			break;}
		}
		
	}
	return 0;
}