#include <stdio.h>
#define size 6
int queue[size], rear=-1, front=-1,item;
void enqueue();
void dequeue();
void display();
int main()
{
int ch;
do
{
printf("\n\n1. enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
printf("\nEnter your choice:");
scanf("%d", &ch);
switch(ch)
{
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
exit(0);
default:
printf("\n\nInvalid entry. Please try again...\n");
}
} while(ch<=4);
}
void enqueue()
{
if(rear == size-1)
printf("\nQueue is full.");
else
{
printf("\n\nEnter ITEM:");
scanf("%d", &item);
if (rear == -1 && front == -1)
{
rear = 0;
front = 0;
}
else
rear++;
queue[rear] = item;
printf("\n\nItem inserted: %d", item);
}
}
void dequeue()
{
if(front == -1)
printf("\n\nQueue is empty.");
else
{
item = queue[front];
if (front == rear)
{
front = -1;
rear = -1;
}
else
front++;
printf("\n\nItem deleted: %d", item);
}
}
void display()
{
int i;
if(front == -1)
printf("\n\nQueue is empty.");
else
{
printf("\n\n");
for(i=front; i<=rear; i++)
printf( "%d", queue[i]);
}
}
