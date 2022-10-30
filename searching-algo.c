#include<stdio.h>
#define compare(p,q) ((p)<(q)?-1:((p)==(q))?0:1)
#define swap(c,d,temp)((temp)=(c),(c)=(d),(d)=(temp))

void main()
{
    int arr[10],n,choice,element,pos,i;
    printf("Enter no. of element: ");
    scanf("%d",&n);
    printf("\nEnter the array elements: ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    do{
    printf("\n\noptions\n1.Linear search\n2.Binary search\n3.dispaly\n4.Exit");
    printf("\nEnter choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("\nlinear search...\nEnter element to be searched:");
               scanf("%d",&element);
               linearsearch(arr,n,element);
               break;
        case 2:printf("\nbinary search....\nEnter element to be searched:");
               scanf("%d",&element);
               binarySearch(arr,n,element);
               break;
        case 3:for (i = 0; i < n; i++) {
              printf(" %d ",arr[i] );
                  }
                break;
        case 4:exit(0);
               break;
    }
}while(choice!=4);
}


void linearsearch(int a[],int no,int key)
{
    int flag=0,i;
    for(i=0;i<no;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("\nElement found at position %d",i+1);
    else
    printf("\nElement not found");
}

int binarySearch(int a[], int n,int ser)
{
  int temp;
  for(int i=1;i<n;i++)
{
for(int j=0;j<(n-i);j++)
 if(a[j]>a[j+1])
 swap(a[j],a[j+1],temp);
}
printf("\n Sorted array :");
for(int i=0;i<n;i++)
printf(" %d ",a[i]);

int first=0,x;
int last=n-1;
int mid=(first+last)/2;
while(first<=last)
{
x=compare(a[mid],ser);
if(x==0)
{
printf("\nFound at %d position",mid+1);
break;
}
else if(x==-1)

first=mid+1;
else
last=mid-1;
mid=(last+first)/2;
}
if(first>last)
printf("\nELEMENT NOT FOUND!!!!!!");
}
    
