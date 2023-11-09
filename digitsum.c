#include <stdio.h>
int main()
{
    int n=0 ,i,x,sum=0,t;
    printf("enter a number :");
    scanf("%d",&x);
    int s=0;
    while(x!=0)
    {
      n=x%10;
      s=n+s;
      x=x/10;
    }
    while(s!=0)
    {
      i=s%10;
      sum=sum+i;
      s=s/10;
    }
   while(sum!=0)
    {
      t=sum%10;
      n=n+t;
      sum=sum/10;
    }
    printf("%d\n",n);
    return 0;
  }
