#include<stdio.h>
int search(int arr[],int key,int n)
{
    // int i;
    // for(i=0;i<n;i++)
    // {
    //     if(arr[i]==key)
    //     return i+1;
    // }
    // return -1;
    if(n==0)
    return -1;
    if(key == arr[n-1])
    return n-1;
    else
    return search(arr,key,n-1);
}
void main()
{
    int n,i,key;
    printf("Enter the no of elements you want to eneter : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter what elemnt you want to search : \n");
    scanf("%d",&key);
    i=search(arr,key,n);
    if(i>=0)
    printf("Value is present at %d",i);
    else
    printf("Value is not present ");
}
