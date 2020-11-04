#include <stdio.h>
int maxi(int x[],int m)
{
    int y=x[0],j;
    for(j=1;j<m;j++)
    {
        if(x[j]>y)
        y=x[j];
    }
    return y;
}
int main()
{
    int t,n,i,a[100],b[100],sum1,sum2;
    scanf("%d",&t);
    while(t--)
    {
        sum1=0,sum2=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
           scanf("%d",&a[i]); 
           sum1=sum1+a[i];
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
            sum2=sum2+b[i];
        }
        sum1=sum1-maxi(a,n);
        sum2=sum2-maxi(b,n);
        if(sum1<sum2)
        printf("Alice\n");
        else if(sum1>sum2)
        printf("Bob\n");
        else if(sum1==sum2)
        printf("Draw\n");
    }
    return 0;
}