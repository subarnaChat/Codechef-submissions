#include <stdio.h>

int main()
{
    int t,n,i,a[1000],sum,sam,sim;
    scanf("%d",&t);
    while(t--)
    {
        sum=0,sam=0,sim=0;
        scanf("%d",&n);
        for (i=0;i<n;i++)
        {
         scanf("%d ",&a[i]);
         sum=sum+a[i];
        }
        if(sum%2==0)
        printf("NO\n");
        else
        {
        sam=(sum/2)+1;
        sim=sum-sam;
        if((sam-sim)==1)
        printf("YES\n");
        }
    }
    return 0;
}