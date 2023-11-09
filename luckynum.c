#include<stdio.h>
int lucky(int n)
{
  int arr[n],i,c=0,j;
  for(i=1;i<(n/2);i++){
    for(j=0;j<i;j++)
    {
      if(n%(i+j)==0)
      {
        c++;
      }
    }
  }
  if(c<=1)
  return 1;
  else
  return 0;
}
void main()
{
  int n,a;
  printf("Enter the number you want to check : ");
  scanf("%d",&n);
  a=lucky(n);
  if(a==1)
  printf("lucky number");
  else
  printf("not a lucky num ");
}
/*#include<stdio.h>
int lucky(int n)
{
  int arr[n];
  static int i=0,c=0
  for(i=1;i<(n/2);i++){
    if(n%i==0)
    {
      c++;
    }
  }
  if(c<=1)
  return 1;
  else
  return 0;
  }
void main()
{
  int n,a;
  printf("Enter the number you want to check : ");
  scanf("%d",&n);
  a=lucky(n);
  if(a==1)
  printf("lucky number");
  else
  printf("not a lucky num ");
}
*/
