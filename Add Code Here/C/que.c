#include<stdio.h>
#define max 3
int q[max],n,val,rear=0, front=0;
int main()
{    
printf(" Queue\n");
     printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
      while(1)
       {
          printf("\nselect number:");
        scanf("%d",&n);
        
        switch(n)
        {
        case 1:
           if(front==0)

            {
                rear=1; front=1;
               printf("\nEnter element to be inserted:");
             scanf("%d",&val);
            q[rear]=val;

            }

            else if(max==rear)
                printf("\nQueue is full!! Overflow!");
            
            else 
           { rear=rear+1;
            printf("\nEnter element to be inserted:");
             scanf("%d",&val);
            q[rear]=val;}
            break;
        case 2:
            if(front==rear)

            {
                printf("Deleted:%d",q[front]);
                printf("\nQueue is empty!! Underflow!\n");
                front=0; rear=0;
            }
            
            else

            {

             printf("Deleted:%d",q[front]);
            front=front+1;
            }
            
             
            break;
        case 3:
            display ();
            break;
            
        default: printf("invalid selection");
       break;
         }}
    return 0;
}
void display()
{
    int i;
    if(front==0)

    {

        printf("\nQueue is empty!!");
    return 0;
    }
        printf("\nQueue:");
    if (rear >= front) 
    {
    for(i=front;i<=rear;i++)
    printf("%d ",q[i]);
    
}
printf("\nFront=%d Rear=%d", front,rear);
}
