#include<stdio.h>
int display(int ar[],int n);
void deletion(int ar[], int n);
void insertion(int ar[], int n)
{int i,k,x,p,po;
  int new[10];
  printf("Enter the number of elements to be inserted : ");
  scanf("%d",&p);
  printf("Enter the %d elements: ",p);
  for(i=0;i<p;i++)
  scanf("%d",&new[i]);
  printf("Enter the index from which elments are to be inserted : ");
  scanf("%d",&po);
  for(i=n-1;i>=po;i--){
    ar[i+p]=ar[i];
  }
  for(i=0;i<p;i++)
  ar[p+i]=new[i];
  x=n+p;
  printf("After insertion ");
  display(ar,x);
}
int display(int ar[],int n) {
  int i;
  printf("the modified array is : ");
  for(i=0;i<n;i++) {
    printf("%d ",ar[i]);
  }
  return 0;
}
void main()
{
  int n;
  printf("Enter the size of the array : ");
  scanf("%d",&n);
  int arr[n];
  int i,x;
  for(i=0;i<n;i++)
  {
    printf("Enter %d element : ",i+1);
    scanf("%d",&arr[i]);
  }
  do{

    printf("\npress 1 to enter elemnets and 2 to dlt elements and 3 to display else press 4 number to exit : \n");
    scanf("%d",&x);
    switch(x)
    {
      case 1:
      insertion(arr,n);
      printf("\n");
      break;
      case 2:
      deletion(arr,n);
      break;
      case 3:
      display(arr,n);
      default:
      printf("Wrong input");
    }
  }while(x!=4);
}
void deletion(int ar[], int n ) {
  int i,x,p,q;
  printf("\nEnter the range of element to be deleted : ");
  scanf("%d%d",&p,&q);
  int arr[n-(q-p)];
  for(i=p+1;i<n+1;i++) {
    ar[i-1]=ar[i];
  }
  for(i=0;i<n-(q-p);i++)
  arr[i]=ar[i];
  printf("After deletion ");
  display(arr,n);
}
