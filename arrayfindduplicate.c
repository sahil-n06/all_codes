#include<stdio.h>
int main()
{
  int n,j,v=0,i,k=0;
  printf("Enter the size of the array : ");
  scanf("%d",&n);
  int arr[n],narr[n],freq[n];
  for(i =0 ;i<n;i++)
  {
    printf("Enter an number : ");
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0,v=0;j<n;j++)
    {
      if(arr[i]==arr[j]){
    v++;
  }
}
  if(v>1)
  {
      narr[k]=arr[i];
      freq[k]=v;
    k++;
  }
    }
    for(i=0;i<k;i++)
    printf("the duplicate elements  %d and the frequency %d \n",narr[i],freq[i]);
  return 0;
}
