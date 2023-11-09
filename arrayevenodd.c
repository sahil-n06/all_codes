#include<stdio.h>
int main()
{
  int n,i;
  printf("enter the lenght of array : ");
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<=n;i++)
  {
    printf("enter the number :");
    scanf("%d",&arr[i]);
  }
  for(i=0;i<=n;i++){
    if(arr[i]%2==0)
    printf("%d even\n",arr[i]);
    else
    printf("%d odd",arr[i]);
  }
  for(i=0;i<=n;i++){
    if(arr[i]%2!=0)
    printf("%d odd\n",arr[i]);
   }
  return 0;
}
