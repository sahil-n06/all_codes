#include<stdio.h>
int sumnatural(int n)
{
  n=(n*(n+1))/2;
  return n;
}
void main()
{
  int n;
  printf("how many natural number you want to enter : ");
  scanf("%d",&n);
  int i;
  int arr[n],sum=0;
  printf("Enter num \n");
  for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
  sum=sum+arr[i];
}
  int t;
  t=sumnatural(n+1);
  printf("Missing element is : %d",t-sum);
}
