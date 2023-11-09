#include<stdio.h>
int main()
{
  int i,max[7],min[7],sum=0,add=0;
  for(i=0;i<=6;i++)
  {
  printf("enter the max and min temp of %d day of the week respectively :",i+1);
  scanf("%d%d",&max[i],&min[i]);
  }
  for(i=0;i<=6;i++)
  {
    sum=sum+max[i];
    add=add+min[i];
  }
  printf("the avg of the max temp is %d\nthe avg of the min temp is %d",sum/7,add/7);
  return 0;
}
