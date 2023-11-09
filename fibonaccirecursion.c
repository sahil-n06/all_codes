#include<stdio.h>
int fib(int a)
{
  if(a==0)
  return 0;
  else if (a==1)
  return 1;
  else
  return fib(a-2)+fib(a-1);
}
void main()
{
  int n,i,c;
  printf("Enter the nth position :");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    c=fib(i);
    printf("%d",c);
  }
}
/*
#include<stdio.h>
int fib(int i ){
  if(i==1)
  return 1;
  else if(i==0)
  return 0;
  else
  return fib(i-1) + fib(i-2);
}
void main(){
  int num ,i,x;
  printf("Enter number of terms : ");
  scanf("%d",&num);
  for(i=0;i<num;i++){
    x=fib(i);
    printf("%d ",x);
  }
}

*/
