#include<stdio.h>
int main()
{
  char new[500],arr[500];
  int i,j;
  printf("enter a string : ");
  gets(arr);
  for(i=0,j=0;arr[i]!='\0';i++,j++)
  {
    if ((arr[i]=='a'||arr[i]=='e')||(arr[i]=='i'||arr[i]=='o')||(arr[i]=='u'||arr[i]=='A')||(arr[i]=='E'||arr[i]=='I')||(arr[i]=='O'||arr[i]=='U'))
    new[j]='@';
    else
    new[j]=arr[i];
  }
  printf("Original array is %s",arr);
  printf("\nNew array is %s",new);


  return 0;
}
