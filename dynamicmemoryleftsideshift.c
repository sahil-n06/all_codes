#include <stdio.h>
#include<stdlib.h>
int insertion(int *p){
  int i;
  for(i=0;i<5;i++)
  scanf("%d",&p[i]);
  return p;
}
int display(int *p){
  for(int i=0;i<5;i++)
  printf("%d",p[i]);
}
/*int display1(int *p){
  for(int i=4;i>=0;i--)
  printf("%d",p[i]);
}
*/
void leftshift(int *p)
{
  int temp,arr[5],d;
  printf("\nEnter the position from you want to rotate : ");
  scanf("%d",&d);
  int i,j,k,l;
  /*for(i=d;i<5;i++)
    arr[i]=p[i];
    //while(i>4){
    for(j=0;j<d;j++)
    arr[j]=p[j];
  //}
    //arr[i]=p[i];
    /*while(i>4){
    for(j=0;j<d;j++)
    arr[j]=p[j];}*/

  for(i=0;i<5;i++)
  arr[i]=p[i];
  for(i=d,k=0;i<5;i++,k++)
  p[k]=arr[i];
  for(j=0,l=k;j<d;j++,l++)
  p[l]=arr[j];
  printf("\nAfter\n");
  display(p);
}
int main() {
    int *p;
    p=(int *)malloc(5*sizeof(int));
    insertion(p);
    display(p);
    leftshift(p);
    free(p);
    p=NULL;
    return 0;
}
