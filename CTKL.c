#include <stdio.h>
#include<math.h>
int main(void) {
    int t;
    double h,d,u,t1,t2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf %lf %lf",&h,&d,&u);
        t1=d/u;
        
        t2=sqrt((2*h)/10);
        
        if(t2>=t1)
        printf("Ran away \n");
        else
        printf("Caught \n");
    }
	// your code goes here
	return 0;
}

