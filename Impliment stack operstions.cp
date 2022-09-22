#include<stdio.h>
#define Size 4 
int Top=-1, stack[Size];
void Push();
void Pop();
void peek();
void display();
int main()
{
	int choice;
	while(1)	
	{
		printf("\n1.Push\n2.Pop\n3.peek\n4.display\n5.stop");
		printf("\n\nEnter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: Push();
					break;
			case 2: Pop();
					break;
			case 3: peek();
					break;
			case 4: display();
			        break;
			case 5: exit(0);        
			default: printf("\nInvalid choice!!");
		}
	}
}
void Push()
{
	int x;	
	if(Top==Size-1)
	{
		printf("Overflow!!\n");
	}
	else
	{
		printf("\nEnter element to be inserted to the stack:");
		scanf("%d",&x);
		Top=Top+1;
		stack[Top]=x;
	}
} 
void Pop()
{
	if(Top==-1)
	{
		printf("Underflow!!\n");
	}
	else
	{
		printf("\nPopped element:  %d",stack[Top]);
		Top=Top-1;
	}
} 
void peek()
{
    if(Top==-1)
    {
        printf("underflow\n");
    }
    else
    {
        printf("the top most element is:%d",stack[Top]);
        
    }
}
void display()
{		
	if(Top==-1)
	{
		printf("Underflow!!\n");
	}
	else
	{
	    int i;
		printf("\nElements present in the stack: \n");
		for(i=Top;i>=0;i--)
			printf("%d\n",stack[i]);
	}
}
