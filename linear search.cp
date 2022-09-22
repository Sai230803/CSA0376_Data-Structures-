#include <stdio.h>
int main()
{
   int i,n,a[10],key;
   printf("enter the size:");
   scanf("%d",&n);
   printf("enter the elements:");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("enter the element to search:");
   scanf("%d",&key);
   for(i=0;i<n;i++)
  {
      if(a[i]==key)
      {
          printf("%d found at index %d",n,i);
          break;
      }
      
  }
   if(i==n)
   {
   printf("not found");
   }
}

   
