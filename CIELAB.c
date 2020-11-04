#include<stdio.h>
int main()
{
	int a,b,c,dig;
	scanf("%d %d",&a,&b);
	c=a-b;
	dig=c%10;
	if(dig==0||dig==1)
	 c++;
	else
	 c--;
	printf("%d",c);
	return 0;
}