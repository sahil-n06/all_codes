#include<stdio.h>
#include<stdlib.h>
void main()
{
  int d;
  do
  {
    printf("press 1 to do factorial of a number\npress 2 to print table of a number\npress 3 to do summation of two numbers\npress 4 to exit \n");
    scanf("%d",&d);
    switch(d){
    case 1:
    {
      int f,n,i=1;
      printf("enter the number :");
      scanf("%d",&n);


      
      for(f=1;f<=n;f++)
      {
      i=i*f;
    }
        printf("factorial of a number is %d\n",i);

    }
    break;
     case 2:
    {
      int b,a;
      printf("enter a number:");
      scanf("%d",&a);
      for(b=1;b<=10;b++)
      {
        printf("%d X %d = %d\n",a,b,a*b);
      }
    }
    break;
    case 3:
    {
        int x,y;
        printf("enter a number :");
        scanf("%d",&x);
        int s=0;
        while(x>0)
        {
          y=x%10;
          x=x/10;
          s=y+s;
        }
        printf("sum of digit = %d\n",s);
    }
    break;
    case 4:
    exit(0);
    default:
    printf("wrong syntax\n");

  }
}
  while(d!=4);

}
