#include <stdio.h>

int main(void) {
    int t,n,i,c;
    long long int x,a[1000];
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d %lld",&n,&x);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>=x)
            c=1;
        }
        if(c==1)
        printf("YES \n");
        else
        printf("NO \n");
    }
	// your code goes here
	return 0;
}

