#include <stdio.h>
int main()
{
    int i,n,fibb,t1=0,t2=1;
    printf("enter the number:");
    scanf("%d",&n);
    printf("the fibonocie series:\n");
    for(i=1;i<=n;i++)
    {
      printf("%d\t",t1);
      fibb=t1+t2;
      t1=t2;
      t2=fibb;
    }
}
