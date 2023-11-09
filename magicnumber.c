#include<stdio.h>
int main()
{
  int n,y,num,t,r,h;
  printf("enter a number :");
  scanf("%d",&n);
  int s=0;
  while(n!=0)
  {
    y=n%10;
    n=n/10;
    s=y+s;
  }

  num=n;
t=0;
while(n>0){
r=n%10;
t=t*10+r;
n=n/10;}
h=t*s;
if(h==n)
printf("magic num");
else
printf("not a magic num");

  return 0;
}
