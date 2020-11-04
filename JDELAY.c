#include <stdio.h>

int main(void) {
    int t,n,i,s[100],j[100],c;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&s[i],&j[i]);
        }
        for(i=0;i<n;i++)
        {
            if((j[i]-s[i])>5)
            c++;
        }
        printf("%d \n",c);
    }
	// your code goes here
	return 0;
}

