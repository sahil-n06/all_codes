#include<stdio.h>
int main()
{
  int n,i,c=0;
  printf("enter the lenght of array : ");
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  {
    printf("enter the number :");
    scanf("%d",&arr[i]);
  }
  for(i=0;i<=n;i++){
    if((arr[i]%2==0 || arr[i]%3==0)|| (arr[i]%5==0 || arr[i]%7==0))
    c++;
    //printf("%d not a prime number\n",arr[i]);
  //for(i=0;i<=n;i++){
    //else if(arr[i]%5==0 && arr[i]%7==0)
  //  printf("%d not a prime number\n",arr[i]);

    if(c==1)
    printf("%d not a prime number\n",arr[i]);
     else
    printf("%d prime number",arr[i]);
  }
  return 0;
}
