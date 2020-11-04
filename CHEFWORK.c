#include <stdio.h>

int main()
{
    int n,i,t[1000];
    long int c[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%ld",&c[i]);
    for(i=0;i<n;i++)
    scanf("%d",&t[i]);
    long int min1=100001,min2=100001,min3=100001;
    for(i=0;i<n;i++)
    {
        if(t[i]==1)
        {
            if(c[i]<min1)
            min1=c[i];
        }
        if(t[i]==2)
        {
            if(c[i]<min2)
            min2=c[i];
        }
        if(t[i]==3)
        {
            if(c[i]<min3)
            min3=c[i];
        }
    }
    if((min1+min2)<min3)
    printf("%ld",(min1+min2));
    else
    printf("%ld",min3);
    return 0;
}
