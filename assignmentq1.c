/*#include<stdio.h>
#include<string.h>
int main()
{
  int i,j;
  char arr[150],s;
  printf("enter the string : ");
  gets(arr);
  printf("The string is : ");
  puts(arr);
  for(i=0;i<150;i++)
  {
    printf("the char is %c",arr[i]);
    printf("\n");
  }
  printf("Enter the character you want to dlt : ");
  scanf("%c",&s);
  /*for(i=0;i<150;i++)
  {
    if(arr[i]==s)
    {

    }
  }
//  int i, j;
int l = strlen(arr);
for(i=0; i<l; i++)
{
    if(arr[i] == s)
    {
        for(j=i; j<l; j++)
        {
            arr[j] = arr[j+1];
        }
        l--;
        i--;
    }
}

  return 0;
}
*/
#include<stdio.h>
#include<string.h>
int main()
{
  int i,j,g=150;
  char arr[g],s;
  printf("enter the string : ");
  gets(arr);
  printf("The string is : ");
  puts(arr);
  printf("Enter the character you want to dlt : ");
  scanf("%c",&s);
  for(i=0;i<g;i++)
  {
    if(arr[i]==s)
    {
      for(j=i;j<g;j++)
      {
        arr[j]=arr[j+1];
      }
    }
  }
  printf("New string after del is ");
  puts(arr);
  return 0;
}
