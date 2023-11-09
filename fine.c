#include <stdio.h>
int main()
{
    int a,b;
    printf("no. of days a book is issued :");
    scanf("%d",&a);
    b=a-10;
    if(a<=10)
    {
        printf("no fine");
    }
    else if(a>10 && a<=20)
    {
        printf("the fine is %d",b);
    }
    else if(a>20 && a<=31)
    {
        printf("the fine is %d",(a-20)*5+10);
    }
    else
    printf("registration is cancelled");

    return 0;
}
