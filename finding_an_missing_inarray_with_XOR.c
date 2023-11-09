/*#include<stdio.h>
#include<stdlib.h>
void main(){
    int n;
    printf("how many natural number you want to enter : ");
    scanf("%d",&n);
    int i;
    int arr[n],new[n],sum=0;
    printf("Enter num \n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
    num[i]=arr[i]^1;
    printf("%d",num[i]);
    +
    }
}
*/
#include<stdio.h>
void main(){
  int i,n,sum=0,r=0;
  //printf("Enter size of array : ");
  //scanf("%d",&n);
  // int ar[]={6,1,2,8,4,7};
  int ar[]={1,4,2,6,7,5};
  n=sizeof(ar)/sizeof(ar[0]);
/*for(i=0;i<
n;i++){
  sum=sum+ar[i];

}
i=0;
n=n+1;
i=(n*(n+1))/2;
printf("Missing element is : %d",i-sum);
}*/

// for(i=1;i<=n+1;i++){
//   sum=sum^i;
// }
for(i=0;i<n;i++){
  sum=sum^ar[i];
}
printf("Missing element is %d",sum);
}
