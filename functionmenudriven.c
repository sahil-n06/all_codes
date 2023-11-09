#include<stdio.h>
#include<stdlib.h>
int floidt()
{    int r,i,j,c=1;
    printf("enter the number of rows");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
      for(j=1;j<=i;j++)
      printf("%d ",c++);
      printf("\n");
    }
  }
void pascal()
{
  int r,c=1,s,i,j;
   printf("Enter the number of rows: ");
   scanf("%d",&r);
   for(i=0;i<r;i++) {
      for(s=1;s<r-i;s++)
         printf("  ");
      for(j=0;j<=i;j++)
      {
         if(j==0||i==0)
            c=1;
         else
            c=c*(i-j+1)/j;
         printf("%d",c);
      }
      printf("\n");
   }
}
void rhombus()
{
  int n,r, c;
    while (r<= n) {
        c = n;
        while (c > r) {
            printf(" ");
            c--;
        }
        printf("*");
        c= 1;
        while (c< (r - 1) * 2) {
            printf(" ");
            c++;
        }
        if (r == 1) {
            printf("\n");
        }
        else {
            printf("*\n");
        }
        r++;
    }
    r = n - 1;
    while (r >= 1) {
        c = n;
        while (c > r) {
            printf(" ");
            c--;
        }
        printf("*");
        c= 1;
        while (c< (r - 1) * 2) {
            printf(" ");
            c++;
        }
        if (r== 1) {
            printf("\n");
        }
        else {
            printf("*\n");
        }
        r--;
    }

}

void main()
{
  int d;
  do
  {
    printf("press 1 to print the floid triangle\npress 2 to print pascal triangle \npress 3 to print hollow rhombus \npress 4 to exit \n");
    scanf("%d",&d);
    switch(d){
    case 1:
    floidt();
    break;
     case 2:
     rhombus();
    break;
    case 3:
    pascal();
    break;
    case 4:
    exit(0);
    default:
    printf("wrong syntax\n");
  }
}
  while(d!=4);

}
