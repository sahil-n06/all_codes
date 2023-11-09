#include<stdio.h>
void main()
{
  int i,j,c=0,n,temp;
  printf("Enter the number of elements you wNT to enter : ");
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(arr[j]>arr[j+1])
      {temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
      c++;
      }
      if(c==0)
      break;
    }
  }
  for(i=0;i<n;i++)
  {
    printf("%d",arr[i]);
  }
}
