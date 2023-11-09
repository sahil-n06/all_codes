#include<stdio.h>
void main()
{
  int a,b,i,j,k;
  printf("Enter the number of rows  : ");
  scanf("%d",&a);
  printf("Enter the number of columns : ");
  scanf("%d",&b);
  int arr[a][b],ar[a],te[a];
  printf("Enter the number of element : \n");
  for(i=0;i<a;i++)
  {
    for(j=0;j<b;j++)
    {
      printf("Enter the a%d%d element ",i+1,j+1);
      scanf("%d",&arr[i][j]);
    }
  }
  if(a==b)
  {
    for(i=0;i<a;i++)
    {
      for(j=0;j<b;j++)
      {
        if(i==j)
        {
          ar[i]=arr[i][j];
        }
      }
      for(k=0;k<b;k++)
      {
        te[i]=arr[i][k];
      }
    }
  }
  for(i=0;i<a;i++)
  {
    for(j=0;j<b;j++)
    {
      for(k=2;k<a;k--)
      {if(i==j){
        arr[i][j]=ar[i];}
        else
        arr[i][k]=te[k];
      }
    }
  }
  printf("/n/n/n/n");
  for(i=0;i<a;i++)
  {
    for(j=0;j<b;j++){
      printf(" %d ",arr[i][j]);
    }
    printf("/n");
  }

}
