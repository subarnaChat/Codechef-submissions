#include <stdio.h>

int main(void) {
    long long int n,k,i,t[1000000000],c=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t[i]);
        if(t[i]%k==0)
        c++;
    }
    printf("%d ",c);
	// your code goes here
	return 0;
}

