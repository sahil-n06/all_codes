#include<stdio.h>
void insertion(int ar[],int n);
void deletion(int ar[], int n);
int display(int ar[],int n);
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
  //printf("Enter element to be inserted : ");
  //scanf("%d",&k);
  for(i=n-1;i>=po;i--){
    ar[i+p]=ar[i];
  }
  for(i=0;i<p;i++)
  ar[p+i]=new[i];
  x=n+p;
  printf("After insertion ");
  display(ar,x);

}
void deletion(int ar[], int n ) {
  int i,x,p;
  printf("\nEnter the index of element to be deleted : ");
  scanf("%d",&p);
  for(i=p+1;i<n+1;i++) {
    ar[i-1]=ar[i];
  }printf("After deletion ");

  display(ar,n);
}
int display(int ar[],int n) {
  int i;
  printf("the modified array is : ");
  for(i=0;i<n;i++) {
    printf("%d ",ar[i]);
  }
  return 0;
}
  void main() {
    int i,n,p;
    int ar[50];
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter array elements : ");
    for(i=0;i<n;i++) {
    scanf("%d",&ar[i]);
  }
    //printf("Enter the position of the element : ");
    //scanf("%d",&p);
    insertion(ar,n);
    deletion(ar,n);


  }
