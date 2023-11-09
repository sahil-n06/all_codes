#include<stdio.h>
void main()
{
  int binary,decimal,weight,rem;
  printf("Enter the num : ");
  scanf("%d",&binary);
  decimal=0,weight=1;
  while(binary!=0)
  {
    rem=binary%10;
    decimal=decimal+rem*weight;
    binary=binary/10;
    weight = weight*2;
  }
  printf("the decimal value is %d\n",decimal);
}
  
