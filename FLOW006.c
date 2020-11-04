#include<stdio.h>
int main()
{
	int s=0,t,n,i,dig;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		s=0;
		while(n>0)
		{
			dig=n%10;
			n=n/10;
			s+=dig;
		}
		printf("%d\n",s);
	}
	return 0;
}