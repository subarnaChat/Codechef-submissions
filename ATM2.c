#include <stdio.h>

int main(void) {
    int t,n,i,j;
    
    long long int k,a[101];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %lld",&n,&k);
        char s[101]="";
        for(i=0;i<n;i++)
        {
            scanf("%lld ",&a[i]);
        }
        for(i=0,j=0;i<n;i++,j++)
        {
            if(k>=a[i]){
            k=k-a[i];
            s[j]='1';}
            else
            s[j]='0';
        }
        for(i=0;i<n;i++){
        printf("%c",s[i]);}
        printf("\n");
        
    }
	// your code goes here
	return 0;
}

