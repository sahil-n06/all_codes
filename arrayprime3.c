#include<stdio.h>
int main()
{
  int n,i,j,c=0,l=0,k=0;
  printf("enter the size of the array :");
  scanf("%d",&n);
  int arr[n],nprime[n],prime[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++){
    for(j=2;j<=arr[i]/2;j++)
    {
      if(arr[i]%j==0)
      c++;
    }
    if(c!=0){
      nprime[k]=arr[i];
    k++;}
    else
    {prime[l]=arr[i];
    l++; }
  }
  for(i=0;i<k;i++)
  printf("%d is not a prime\n",nprime[i]);
  for(i=0;i<l;i++)
  printf("%d is a prime num \n",prime[i]);

  return 0;
}
