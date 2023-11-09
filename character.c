#include<stdio.h>
void main()
{
  char ch;
  printf("enter a character :");
  scanf("%c",&ch);
  if(ch>='a' && ch<='z')
  printf("lower case");
  else if(ch>='A' && ch<='Z')
  printf("upper case");
  else if(ch/1==ch)
  printf("digit");
  else
  printf("special character");

}
