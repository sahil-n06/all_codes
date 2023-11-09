#include<stdio.h>
int happy(int n)
{
    int r,sum=0;
    while(n>4){
    sum=0;
    while(n!=0)
    {
        r=n%10;
        sum=sum+(r*r);
        n=n/10;
    }
    n=sum;
  }
    if(n==0)
    return 1;
    else if(n==1)
    return 0;
  /*  else
    return happy(n);
   * else
    return*/
}
int main()
{
  int n;
  printf("Enter a number : ");
  scanf("%d",&n);
  int t;
  t=happy(n);
  printf("%d",t);
}
