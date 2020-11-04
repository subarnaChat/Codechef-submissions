#include<stdio.h>
int main()
{
	float b;
	int w;
	scanf("%d",&w);
	scanf("%f",&b);
	if((w+0.5)<b)
	{
	  if(w%5==0)
	 {
		b=b-w-0.50;
	 }
}
	 printf("%0.2f",b);
	return 0;
}