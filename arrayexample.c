#include<stdio.h>
void main()
{
  int arr[5],i,a;
  for(i=0;i<=4;i++){
  printf("enter the num :");
  scanf("%d",&arr[i]);}
  for(i=0;i<=4;i++)
  printf("\n%d",arr[i]*2);
  arr[i]=arr[i]*2;
  printf("\n%d",arr[i]);
  //scanf()

}
