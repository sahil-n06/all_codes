#include<stdio.h>
int main(){
  int i,j,k,key;
  int n;
  printf("Enter the size of the array : ");
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  {
    printf("enter the num : ");
    scanf("%d",&arr[i]);
  }
  for(i=1;i<n;i++)
  {
    key=arr[i];
    j=i-1;

  while(key<arr[j]&&j>=0)
  {
    arr[j+1]=arr[j];
    j--;
  }
  arr[j+1]=key;
}
printf("sorted array : ");
for(i=0;i<n;i++)
printf("%d ",arr[i]);

  return 0;
}
