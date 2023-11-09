#include<stdio.h>
#include<string.h>
int main()
{
  char arr[500];
  int i,n,c=0,v=0,d=0,s=0;
  printf("enter the string : ");
  gets(arr);

  for(i=0;arr[i]!='\0';i++)
  {
   if ((arr[i]=='a'||arr[i]=='e')||(arr[i]=='i'||arr[i]=='o')||(arr[i]=='u'||arr[i]=='A')||(arr[i]=='E'||arr[i]=='I')||(arr[i]=='O'||arr[i]=='U'))
  {v++;}

  else if(arr[i]>='a' && arr[i]<='z')
  {c++;}
  else if(arr[i]>='0' && arr[i]<='9')
  {d++;}
  else
  s++;}
  printf("%d vowel\n",v);
  printf("%d alpha\n",c);
  printf("%d digit\n",d);
  printf("%d special character\n",s);
  return 0;

}
