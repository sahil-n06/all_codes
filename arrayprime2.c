#include<stdio.h>
int main()
{
  int n,i,j,c=0;
  printf("enter the lenght of array : ");
  scanf("%d",&n);
  int arr[n],nprime[n/2],prime[n/2];
  for(i=0;i<n;i++)
  {
    printf("enter the number :");
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
  for(j=2;j<arr[i];j++)
    {
      if(arr[i]%j==0){
      c++;
    nprime[i]=arr[i];}
  }
  }
  for(i=0;i<n;i++)
  {
  printf("not a prime %d\n",nprime[i]);
  }
  for(j=2;j<14;j++)
  {
    for(i=0;i<n;i++)
    if(arr[i]%j!=0){
    prime[i]=arr[i];

  }
  for(i=0;i<n;i++)
  {
  printf(" a prime %d\n",prime[i]);
}
  return 0;
}
}
