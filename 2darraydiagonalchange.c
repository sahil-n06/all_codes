#include<stdio.h>
void main()
{
  int x,y,z,n,i,j,k,temp;
  printf("Enter the row of first matrice : ");
  scanf("%d",&x);
  printf("Enter the cloumn of first matrice : ");
  scanf("%d",&y);
  printf("Enter the row of second matrice : ");
  scanf("%d",&z);
  printf("Enter the column of second matrice : ");
  scanf("%d",&n);
  int arr[x][y],arr1[z][n];
  printf("enter the elements of first matrice \n\n");
  for(i=0;i<x;i++)
  {
    for(j=0;j<y;j++)
    {
      printf("Enter the a%d%d : ",i+1,j+1);
      scanf("%d",&arr[i][j]);
    }
  }
  printf("enter the elements of second matrice \n\n ");
  for(i=0;i<z;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("Enter the a%d%d : ",i+1,j+1);
      scanf("%d",&arr1[i][j]);
    }
  }
  printf("the first matrice is \n");
  for(i=0;i<x;i++)
  {
    for(j=0;j<y;j++)
    {
      printf("%d  ",arr[i][j]);
    }
    printf("\n");
  }
  printf("\n\n");
  printf("the second matrice is \n");
  for(i=0;i<z;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d  ",arr1[i][j]);
    }
    printf("\n");
  }
  printf("\n\n");
  if(x==y||y==z||z==n)
  {
    for(i=0;i<x;i++)
    {
      for(j=0;j<y;j++)
      {
        if(i==j)
        {
          temp=arr[i][j];
          arr[i][j]=arr1[i][j];
          arr1[i][j]=temp;
        }
      }
    }
    printf("\n\n");
    printf("After changing diagonal  the new 1 matrice is :\n");
    for(i=0;i<z;i++)
    {
      for(j=0;j<n;j++)
      {
        printf("%d  ",arr[i][j]);
      }
      printf("\n");
    }
    printf("\n\n");
    printf("After changing diagonal  the new 2 matrice is :\n");
    for(i=0;i<z;i++)
    {
      for(j=0;j<n;j++)
      {
        printf("%d  ",arr1[i][j]);
      }
      printf("\n");
    }
  }
  else
  printf("for changing diagonal matrice they should be square matrice or the order should be same");
}
