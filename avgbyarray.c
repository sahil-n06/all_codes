#include<stdio.h>
int main()
{
  int n,i,sum=0,avg;
  printf("enter the size of the array :");
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++){
  printf("enter the number :");
  scanf("%d",&arr[i]);
  sum=sum+arr[i];}
  avg=(float)sum/5;
  printf("avg =%d",avg);
  return 0;
}
