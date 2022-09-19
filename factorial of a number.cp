#include<stdio.h>
int main()
{
  int i,f=1, num;
 
  printf("Enter a number: ");
  scanf("%d", &num);
 
  for(i=1;i<=num;i++)
    f = f * i;
 
  printf("factorial of a number: %d\n", f);
  return 0;
}
