#include<stdio.h>
int main()
{
  int n,i,j,t;
  printf("enter the lenght of array : ");
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  {
    printf("enter the number :");
    scanf("%d",&arr[i]);
  }
  for(j=0;j<n-1;j++){
    for(i=0;i<n-j-1;i++)
    {
      if(arr[i]>arr[i+1])
      {
        t=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=t;
      }
    }
  }
  for(i=0;i<n;i++)
  printf("\t%d",arr[i]);

  return 0;
}
