#include<stdio.h>
int main()
{
  int n,i,a,c=0,l;
  printf("Enter the size of the array : ");
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("\nenter an element to search : ");
  scanf("%d",&a);
  int f=0,m;
  l=n-1;
  while(f<=l)
  {
    m=(f+l)/2;
    if(a==arr[m]){
    printf("element found");
    c++;
    break;
  }
    else if(a<arr[m])
    l=m-1;
    else
    f=m+1;

  }
  if(c==0)
  printf("element not found");
  return 0;
}
