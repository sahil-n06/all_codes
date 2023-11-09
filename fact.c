#include<stdio.h>
int main()
{
  int f,n,i=1;
  printf("enter the number :");
  scanf("%d",&n);
  for(f=1;f<=n;f++){

  i=i*f;
}
    printf("%d",i);
  return 0;
}/*
#include<stdio.h>
int main()
{ int num, count, fact = 1;
   printf("Enter a number to find its Factorialn");
    scanf("%d", &num);
     for(count = 1; count <= num; count++) {
       fact = fact * count;
      }

      printf("Factorial of %d is %dn", num, fact);
       return 0;
     }*/
