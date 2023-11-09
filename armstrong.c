#include<stdio.h>
#include<math.h>
int main()
{
  int n,c=0,t,r,sum=0;
  printf("enter a number :");
  scanf("%d",&n);
  t=n;
  while(n!=0)
  {
    n=n/10;
    c++;
  }
  n=t;
  while(t!=0)
  {
    r=t%10;
    sum=sum+round(pow(r,c));
    t=t/10;
  }
  if(sum==n)
  printf("armstrong");
  else
  printf("not an armstrong number");
  return 0;
}
