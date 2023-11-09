#include<stdio.h>
#include<stdlib.h>
void main()
{
  int n,i,j;
  printf("enter the size of the array : ");
  scanf("%d",&n);
  int arr[n],leader=0;
  printf("ENter the elemenets : \n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
/*  for(i=0;i<n;i++)
  {
    leader=0;
    for(j=i+1;j<i;j++)
    {
      if(arr[i]<arr[j])
      leader=arr[j];
    }
    printf("%d",leader);
  }*/
  leader=arr[n-1];
  for(i=n-2;i>=0;i--)
  {
    if(leader<arr[i])
    leader=arr[i];
    printf("%d",leader);
  }
}
