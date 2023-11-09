#include<stdio.h>
#include<stdlib.h>
int max_secmax(int *p,int n)
{
  int i,max,t;
  max=0;;
  for(i=0;i<n;i++)
  {
    if(max<p[i]){
    max=p[i];
    t=i;
  }
  }
max=0;
  for(i=0;i<n;i++)
  {
    if(p[i]>max&&p[i]<p[t])
    max=p[i];
  }
  p[0]=p[t];
  if(max==0)
  return -1;
  else
  return max;
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
