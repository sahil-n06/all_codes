#include<stdio.h>
void main()
{
  int n;
  printf("Enter year : ");
  scanf("%d",&n);
  if(n%4==0&&(n%400==0||n%100!=0))
  printf("it is a leap year\n");
  else
  printf("it is not a leap year ");
}
