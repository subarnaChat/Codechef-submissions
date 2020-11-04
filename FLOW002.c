#include <stdio.h>

int main(void) {
    int t,a,b,r;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        r=a%b;
        printf("%d \n",r);
    }
	// your code goes here
	return 0;
}

