#include <stdio.h>
void main(){
  int i,j,a,b,r,r1,c2,a1,b1,k,sum=0;
  printf("enter row of first matrix : ");
  scanf("%d",&a);
  printf("enter column of first matrix : ");

  scanf("%d",&b);
  int arr1[a][b];
  for(i=0;i<a;i++){
    for(j=0;j<b;j++){
      printf("enter the a%d%d element : ",i+1,j+1);
      scanf("%d",&arr1[i][j]);
    }
  }

  printf("The first matrix is:\n");
  for(i=0;i<a;i++){
    for(j=0;j<b;j++){
      printf("%d  ",arr1[i][j]);
    }printf("\n");
}
for(i=0;i<a;i++){
  sum=0;
  for(j=0;j<b;j++){
    sum=sum+arr1[i][j];

  }
  
}
}
