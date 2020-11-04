#include <stdio.h>

int main(void) {
    int t;
    long long int n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf("%lld \n",(n/2)+1);
    }
	// your code goes here
	return 0;
}

