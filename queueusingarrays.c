'''c  
#include<stdio.h>
#define MAX 5
void enqueue();
void dequeue();
void display();
void peek();
void isempty();
void isfull();
int queue[MAX];
int front=-1,rear=-1;
int elm;
void main()
{
   int ch;
   while(1)
   {
      printf("\n");
      printf("1. Enqueue \n");
      printf("2. Dequeue \n");
      printf("3. Display \n");
      printf("5. Exit \n");
      printf("Select ur choice....\n");
      scanf("%d",&ch);
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
			  printf("Invalid choice...\n");
      }
   }
}
void enqueue()
{
   if(rear==MAX-1)
     {
       printf("Queue Overflows...\n");
       return;
     }
     if(front==-1 && rear==-1)
      {
	 front=0;
	 rear=0;
      }
      else
      {	rear++;
      }
      printf("Enter the element to insert");
      scanf("%d",&elm);
      queue[rear]=elm;
      printf("%d inserted successfully...",elm);
}




void dequeue()
{
   if(front==-1)
   {
      printf("Queueu Underflows....\n");
      return;
   }
   elm=queue[front];
   if(front==rear)
     {
       front=-1;
       rear=-1;
     }
   else
     front++;
   printf("%d deleted successfully...",elm);
}
void display()
{
  int i;
  if(front==-1)
  {
     printf("Queue is empty....\n");
  }
  else
  {
     printf("Queue elements r ");
     
    for(i=front;i<=rear;i++)
     {
       printf("%d ",queue[i]);
     }
   }
}
'''c    