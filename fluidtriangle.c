#include<stdio.h>
void main()
{
  int i,j,k,n,num=1;
  printf("Enter the size of the row : ");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
    num=1;
    for(j=0;j<i;j++,num++)
    {
      printf("%d",num);
    }
    printf("\n");
  }
}
