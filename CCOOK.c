#include<stdio.h>
int main()
{
	int N,i,j,sum,a[10];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		sum=0;
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[j]);
			sum=sum+a[j];
		}
		if(sum==0)
		{
		printf("Beginner\n");
		continue;
	}
		else if(sum==1){
		printf("Junior Developer\n");
		continue;}
		else if(sum==2){
		printf("Middle Developer\n");
		continue;}
		else if(sum==3){
		printf("Senior Developer\n");
		continue;}
		else if(sum==4){
		printf("Hacker\n");
		continue;}
		else if(sum==5){
		printf("Jeff Dean\n");
		continue;}
	}
	return 0;
}