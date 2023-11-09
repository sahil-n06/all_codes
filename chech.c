#include <stdio.h>
int main()
{
  int sex,m,male,f,female,total;
  printf("gender of a person :");
  scanf("%d",&sex);
  switch(sex)
  {
    case 'M':
    case 'm':
    male++;
    total++;
    break;
    case 'f':
    case 'F':
    female++;
    total++;
    break;
    default:
    {printf("\nerror in sex code");
    break;}


  }

  return 0;
}
