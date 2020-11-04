#include <stdio.h>
int main(void) {
    int n,one=0,two=0,play,i,a,b;
    int max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        one+=a;
        two+=b;
        if(one>two && one-two>max)
          {
                 max=one-two;
                 play=1;
          }
          else if(one<two && two-one>max)
          {
                  max=two-one;
                  play=2;
          }
    }
    printf("%d %d",play,max);
	// your code goes here
	return 0;
}

