#include <stdio.h>

int main(void) {
  long long int t,s,h;
  scanf("%lld",&t);
  while(t--)
  {
      scanf("%lld %lld",&s,&h);
      if(s>h)
      printf("Shinchan \n");
      else 
      printf("Himawari \n");
  }
	return 0;
}

