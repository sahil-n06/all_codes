#include <stdio.h>
int main()
{
  int n,i,s=0,h=0,max=0,min=9;
  printf("enter a number :");
  scanf("%d",&n);
  while(n>0){
  i=n%10;
  s=s+i;
  //printf("sum of digit =%d",s);
  if(max<i)
  max=i;
  if(min>i)
  min=i;
  n=n/10;
}
printf("largest digit is %d\n",max);
printf("smallest digit is %d\n",min);
printf("sum of digit =%d",s);
  return 0;
}
/*
#include<stdio.h>

int main()
{
    int n,i,max=0,min;
    printf("Enter a number\n");
    scanf("%d",&n);
    max=n%10;
    min=n%10;
    //n=n/10;
    while(n>0)
    {
        i=n%10;
        if(i>max)
        max=i;
        if(i<min)
        min=i;
        n=n/10;


    }
    printf("Greatest=%d\n",max);
printf("smallest=%d",min);
    return 0;
}*/
