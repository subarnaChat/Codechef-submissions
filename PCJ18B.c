#include <stdio.h>
#include<math.h>
int main(void) {
    int t,n,i;
    long int c;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d",&n);
        c=c+(n*n);
        for(i=2;i<=n;i+=2)
        {
            c=c+(pow((n-i),2));
        }
        printf("%ld \n",c);
    }
	// your code goes here
	return 0;
}

