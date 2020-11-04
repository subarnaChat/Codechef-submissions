#include <stdio.h>

int main(void) {
    int t;
    long long int n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n%2==0)
        printf("YES \n");
        else
        printf("NO \n");
    }
	// your code goes here
	return 0;
}

