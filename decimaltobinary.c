#include<stdio.h>
#include<math.h>
void main(){
  int n,rem,i;
  printf("Enter the number : ");
  scanf("%d",&n);
  int a[n];
  i=0;
  while(n){
    rem = n%2;
    n=n/2;
    a[i]=rem;
    i++;
  }
  for(int j=i-1;j>=0;j--)
  {
    printf("%d",a[j]);
  }
}
