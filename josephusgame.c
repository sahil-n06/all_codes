#include<stdio.h>
int josephus(int n,int k)
{
    if(n==1)
    {
        return 0;
    }
    else
    return (josephus(n-1,k)+k)%n;
}
int main()
{
    int n,k,t;
    printf("Enter number of peoples : ");
    scanf("%d",&n);
    printf("Enter the value of k : ");
    scanf("%d",&k);
    t=josephus(n,k);
    printf("%d",t);
}
