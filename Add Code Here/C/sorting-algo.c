#include<stdio.h>
  int arr[20],l;
void insertionSort(int a[], int n) {
 printf("\ninsertion sorting...\n");
  int j,i,temp=0;
  for(i=0;i<n;++i)
{
temp=a[i];
j=i-1;
while((temp<a[j])&&(j>=0))
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=temp;
}
printf("\n SORTED ARRAY :");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
}

void bubbleSort(int a[], int n) {

 printf("\nbubble sorting...\n");
  for (int j = 0; j <n- 1;j++)
    for (int i = 0; i <n-j-1;i++) {

      if (a[i]>a[i + 1]) {

       int temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
      }
  }
  printf("\n SORTED ARRAY :");
  for(int i=0;i<n;i++)
  printf("\ %d ",a[i]);

}


void selectionSort(int a[], int n)
 {
  printf("\nselection sorting...\n");
  for (int j= 0; j < n- 1; j++) {
    int min = j;
    for (int i =j+ 1; i <n; i++) {
  if (a[i] <a[min])
        min = i;

int temp = a[min];
        a[min] = a[j];
        a[j] = temp;
    }
  }
  printf("\n SORTED ARRAY :");
  for(int i=0;i<n;i++)
  printf(" %d ",a[i]);
}

int main() {
  int ar[20],i,choice;
  printf("Enter size of array:");
  scanf("%d",&l);
  printf("Enter elements to %d sized array:",l);
  for(int i=0;i<l;i++)
    {scanf("%d",&ar[i]);
    arr[i]=ar[i];}
do{
 printf("\n\nChoices:-");
  printf("\n1.Insertion sort\n2.Bubble sort\n3.Selection sort\n4.display original array\n5.Exit\n");
  int choice;
  printf("Enter choice:");
  scanf("%d",&choice);
  switch(choice)
  {
      case 1:insertionSort(arr,l);
             break;
      case 2:bubbleSort(arr,l);
             break;
      case 3:selectionSort(arr,l);
             break;
      case 5:exit(0);
             break;
      case 4:for (i = 0; i < l; i++) {
            printf(" %d ",ar[i] );
                }
              break;

  }
} while(choice!=5);
}
    
