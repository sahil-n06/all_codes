#include <stdio.h>
int main ()
{
  int n,i,j,k;
  printf("enter no. of rows :");
  scanf("%d",&n);
  for(i=n-1;i>=1;i--)
  {
    for(j=1;j<=n-i;j++){
      printf(" ");
    }
    printf("*\n");


    return 0;
  }
