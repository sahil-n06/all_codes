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
int main() {
    int *p;
    p=(int *)malloc(5*sizeof(int));
    insertion(p);
    display(p);
    free(p);
    p=NULL;
    return 0;
}
