#include<stdio.h>
void main()
{
    int *p,*q;
    p=(int*)malloc(5*sizeof(int));
    printf("Enter value\n");
    for(int i=0;i<5;i++)
    scanf("%d",&p[i]);
    printf("\nP value \n");
    for(int i=0;i<5;i++)
    printf("\t%d",p[i]);
    q=(int*)malloc(10*sizeof(int));
    for(int i=0;i<5;i++)
    q[i]=p[i];
    printf("\nEnter further value\n");
    for(int i=5;i<10;i++)
    scanf("%d",&q[i]);
    printf("\nQ  value \n");
    for(int i=0;i<10;i++)
    printf("\t%d",q[i]);
    p=q;
    printf("\nP value \n");
    for(int i=0;i<10;i++)
    printf("\t%d",p[i]);
    printf("\n\n%d\n\n",sizeof(p));
    free(q);
    q=NULL;
    free(p);
    p=NULL;
}
