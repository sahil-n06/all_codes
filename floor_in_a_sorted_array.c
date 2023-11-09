#include<stdio.h>
#include<stdlib.h>
int binary(int *p,int f,int l,int key)
{
  int m,min=p[0];
  while(f<=l)
  {   m=(f+l)/2;
      if(key==p[m])
      return m;
      else if(key<p[m])
      return binary(p,f,m-1,key);
      else
      f=m+1;
      return binary(p,m+1,l,key);
    }
    return -1;
}

int floorvalue(int *p,int n,int key)
{
  int index;
  index=binary(p,0,n-1,key);
  if(index==-1&&p[0]>key)
  return -1;
  if(index==-1&&p[0]<key)
  return n-1;
  else
  return index;
}

void main()
{
  int n,i,j,k,l,key;
  printf("enter the size of the array : ");
  scanf("%d",&n);
  int *p,*q;
  p=(int *)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  scanf("%d",&p[i]);
  printf("Enter the number : ");
  scanf("%d",&key);
  k=floorvalue(p,n,key);
  printf("floor at index %d",k);
  p=NULL;
  free(p);
}
