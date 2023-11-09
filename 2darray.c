
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
  printf("Enter row of second MATRIX : ");
  scanf("%d",&a1);
  printf("Enter column of second MATRIX : ");
  scanf("%d",&b1);
  int arr2[a1][b1];
  for(i=0;i<a1;i++){
    for(j=0;j<b1;j++){
      printf("enter the b%d%d element : ",i+1,j+1);
      scanf("%d",&arr2[i][j]);
    }
  }
  int c[a][b1];
  printf("The first matrix is:\n");
  for(i=0;i<a;i++){
    for(j=0;j<b;j++){
      printf("%d  ",arr1[i][j]);
    }printf("\n");
}
printf("The second matrix is:\n");
for(i=0;i<a1;i++){
  for(j=0;j<b1;j++){
    printf("%d  ",arr2[i][j]);
  }printf("\n");
}
}
