#include<stdio.h>
int max(int arr[],int n)
{
  int max=0,c,i;
  for(i=0;i<n;i++)
  {
    if(max<arr[i])
    {
      max=arr[i];
      c=i;
    }
  }
  return c;
}
void main()
{
  int n,c;
  printf("Enter the size of the array  : ");
  scanf("%d",&n);
  int arr[n];
  int i;
  for(i=0;i<n;i++)
  {
    printf("Enter the %d elements : ",i+1);
    scanf("%d",&arr[i]);
  }
  c=max(arr,n);
  printf("Max element is at %d",c+1);
}
