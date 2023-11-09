#include<stdio.h>
int main()
{
  int n,i,a,c=0,l=0;
  printf("Enter the size of the array : ");
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("\nenter an element to search : ");
  scanf("%d",&a);
  for(i=0;i<n;i++)
  {
    if(arr[i]==a){
      c++;
    }
  }
    if(c>=1)
    printf("element found the frequency of the element is %d",c);
    else
    printf("Element not found");
  return 0;
}
