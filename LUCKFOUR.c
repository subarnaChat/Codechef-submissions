#include <stdio.h>
int main(void) {
    int t,n,c,dig;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d",&n);
        while(n>0)
        {
            dig=n%10;
            if(dig==4)
            c++;
            n=n/10;
        }
        printf("%d \n",c);
    }
    return 0;
}

