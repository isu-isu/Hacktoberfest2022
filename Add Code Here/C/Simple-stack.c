#include <stdio.h>
#define SIZE 3
int stack[SIZE],top=-1;
void Push(int[],int);
void Pop(int[]);
void Display(int []);
int main()
{
  int re,choice,data;
  printf("Enter your choice:");
  printf("\n 1.PUSH \n 2.POP \n 3.PRINT\n");
  scanf("%d",&choice);
  Again:
  switch(choice)
  {
    case 1: printf("Enter element to push");
            scanf("%d",&data);
            Push(stack,data);
            break;
    case 2: Pop(stack);
            break;
    case 3: Display(stack);
            break;
    default: printf("\n Invalid Choice");
  }
  printf("\n If you like to do another operation");
  printf("\n 1.PUSH \n 2.POP \n 3.PRINT \n 4.QUIT");
  scanf("%d",&re);
  if(re==1 || re==2 || re==3)
  {
     choice=re;
     goto Again;
  }
  else 
  printf("\n Thank you");
  return 0;
}
void Push(int stack[],int item)
{
     if(top==SIZE-1)
         printf("\nOVER FLOW");
     else
     top=top+1;
     stack[top]=item;
     Display(stack);
}

void Pop(int stack[])
{
  if(top>=0 && top<SIZE)
  {
    stack[top]=NULL;
    top=top-1;
  }
  else
     printf("\n STACK UNDERFLOW");
  Display(stack);
}
void Display(int stack[])
{
  int cpy;
  printf("\n Current stack is:\n");
  if(top==-1)
     printf("\n Empty stack");
  else if(top==0)
  {
    printf("%d",stack[top]);
  }
  else
   { 
     cpy=top;
     printf("\n");
     for(int i=cpy;cpy>=0;cpy--)
       printf("%d \t",stack[cpy]);
   }
}
