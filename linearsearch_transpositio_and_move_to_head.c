#include<stdio.h>
#include<stdlib.h>
/*int trans(int arr[],int n,int key)
{
  int temp,i;
  for(i=0;i<n;i++)
  {
    if(arr[i]==key && i>=0)
    {
      temp=arr[i-1];
      arr[i-1]=arr[i];
      arr[i]=temp;
      return i;
    }
  }
  return -1;
}*/
int move_to_head(int arr[],int n,int key)
{
  int temp,i;
  for(i=0;i<n;i++)
  {
    if(arr[i]==key && i>=0)
    {
      temp=arr[i];
      arr[0]=arr[i];
      arr[i]=temp;
      return i;
    }
  }
  return -1;
}
void main()
{
  int n,key,i,v;
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
  check=move_to_head(arr,n,key);
  if(check<0)
  printf("ELment not found ");
  else
  printf("Elemnt found at %d\n",check);}
  else
  exit(0);
}while(n!=2);
}
