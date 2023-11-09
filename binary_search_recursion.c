#include<stdio.h>
#include<stdlib.h>
int binary(int arr[],int f,int l,int key)
{
  int m;
  while(f<=l)
  {   m=(f+l)/2;
      if(key==arr[m])
      return m;
      else if(key<arr[m])
      return binary(arr,f,m-1,key);
      else
      // f=m+1;
      return binary(arr,m+1,l,key);
    }
    return -1;
}

void main()
{
  int n,key,i,v,f,l,m;
  printf("Enter the size of the array : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elemnets of arrray : \n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  do{
    printf("1 to search and 2 to exit : \n");
    scanf("%d",&v);
    if(v==1){
  printf("Enter the elment you want to search : ");
  scanf("%d",&key);
  int check;
  check=binary(arr,0,n-1,key);
  if(check<0)
  printf("ELment not found ");
  else
  printf("Elemnt found at %d\n",check+1);}
  else
  exit(0);
}while(n!=2);
}
