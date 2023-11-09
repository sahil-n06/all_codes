#include<stdio.h>
void main(){
  int n,c=0,i,j,k=0;
  printf("Enter number : ");
  scanf("%d",&n);
  for(i=n;i>=1;i--)
  {
    c=0;
    for(j=1;j<=i;j++)
    {
      if(i%j==0)
      c++;
    }
    if(c==3)
    k++;
  }
  printf("%d",k);
}
