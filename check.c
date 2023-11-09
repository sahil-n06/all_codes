#include <stdio.h>
int main()
{
    int n,i;
    printf("enter a number :");
    scanf("%d",&n);
    printf("enter a number you want to search :");
    int s,h=0;
    scanf("%d",&s);
    while(n>0)
    {
      i=n%10;
      if(i==s)
      {
        h++;
        break;
      }
      n=n/10;
    }
    if(h!=0)
    printf("it is present");
    else
      printf("not presnt");
    return 0;
  }
