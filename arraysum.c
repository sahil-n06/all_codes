#include<stdio.h>
void main()
{
  int a,b,i;
  printf("Enter the size of the array : ");
  scanf("%d",&a);
  int arr[a],arr1[a],sum=0,s[a];
  printf("Enter the element of first array : \n");
  for(i=0;i<a;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Enter the element of second array : \n");
  for(i=0;i<a;i++)
  {
    scanf("%d",&arr1[i]);
  }
  for(i=0;i<a;i++)
  {
    sum=0;
    s[i]=arr[i]+arr1[i];
  }
  printf("\n\n\n\n");
  for(i=0;i<a;i++)
  {
    printf("%d  ",s[i]);
  }
}
