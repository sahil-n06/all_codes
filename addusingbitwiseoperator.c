#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter first num : ");
    scanf("%d",&a);
    printf("Enter second num : ");
    scanf("%d",&b);
    int sum=0;
    sum=a|b;
    if(a>b)
    printf("%d",sum+b);
    else if(b>a)
    printf("%d",sum+a);
    else
    printf("%d",sum);
}
