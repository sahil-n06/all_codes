#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void palindrome()
{
  int n,t,r,num;
  printf("enter a number :");
  scanf("%d",&n);
  num=n;
  t=0;
  while(n>0){
  r=n%10;
  t=t*10+r;
  n=n/10;}
  if(num==t)
  {
    printf("palindrome");
  }
  else
  printf("not palindrome");
}
void armstrong()
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
}
void perfectnum()
{
  int n,i,t,sum=0;
  printf("Enter the number :");
  scanf("%d",&n);
  for(i=1;i<n;i++)
  {
    t=n%i;
    if(t==0)
    {
      sum=sum+i;
    }
  }
  if(sum==n)
  printf("%d is a perfect number",n);
  else
  printf("%d is not a perfect number ",n);
}
void main()
{
  int n,t;
  do{
    printf("Enter \n1 to check palindrome\n2 to check armstrong\n3 to check perfect number\n4 to exit\n\n\n");
    scanf("%d",&n);
    switch(n)
    {
      case (n%2==0):{
      palindrome();
      break;}
      case 2:{
      armstrong();
      break;}
      case 3:{
        perfectnum();
        break;
      }
      case 4:
      exit(0);
      default:
      printf("wrong input  %c\n",2);
    }
  }while(n!=4);
}
