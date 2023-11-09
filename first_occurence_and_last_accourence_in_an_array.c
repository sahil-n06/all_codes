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
      f=m+1;
      return binary(arr,m+1,l,key);
    }
    return -1;
}
void main()
{
  int n,v=0,key;
  printf("Enter the size of the array : ");
  scanf("%d",&n);
  int arr[n],i;
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  do{
    printf("1 to search and 2 to exit : \n");
    scanf("%d",&v);
  if(v==1){
   printf("Enter the elment you want to search : ");
   scanf("%d",&key);
   int check;
   check=binary(arr,0,n-1,key);
   if(check<0)
   printf("element is not present");
   else
    //printf("first occurense at %d\n",check);
    for(i=check;i<n;i++)
    if(arr[check]==arr[i])
    v++;
    else if(arr[check]==arr[i-1]&&i>=0)
    check--;
    printf("first occurense at %d\n",check);
    printf("LAst occurence at %d\n",check+v-1);
  }
   else
    exit(0);
    }while(n!=2);
}
