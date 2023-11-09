#include<stdio.h>
#include<stdlib.h>
int max_secmax(int *p,int n)
{
  int i,max,temp,c=0,sub=1;
  max=p[0];
  for(i=0;i<n;i++)
  {
    if(max<p[i])
    max=p[i];
  }
  temp=max;
  for(i=0;i<n;i++)
  {
    if(max-p[i]==0)
    c++;
    else if(sub>max-p[i])
    sub=max-p[i];
  }
  p[0]=temp;
  if(c==0)
  return -1;
  else
  return max-sub;
}
void main()
{
  int n,i,t;
  printf("Enter how many elemnts you want to enter : ");
  scanf("%d",&n);
  int *p;
  p=(int*)malloc(n*sizeof(int));
  printf("ENter elements ; ");
  for(i=0;i<n;i++){
  scanf("%d",&p[i]);
}
  t=max_secmax(p,n);
  printf("%d    %d",p[0],t);
}
