#include<stdio.h>
#include<stdlib.h>
int removeDuplicates(int* nums, int n){
    int arr[n],i,c=0,j=0;
    for(i=1;i<=n-1;i++)
    {
        if(nums[i-1]!=nums[i])
        {
            //continue;
            arr[j]=nums[i];
            j++;
            c++;
        }
        //else

    }
    for(i=0;i<c;i++)
    {
        nums[i]=arr[i];
    }
    return c;
}
void main()
{
  int n,t,i;
  printf("Enter the size of the array : ");
  scanf("%d",&n);
  int *p;
  p=(int *)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  {
    scanf("%d",&p[i]);
  }
  t=removeDuplicates(p,n);
  for(i=0;i<t;i++)
  printf("\n%d",p[i]);
  p=NULL;
  free(p);
}
