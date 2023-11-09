#include <stdio.h>

int main()
{
    char ch;
    printf("enter the character :");
    scanf("%c",&ch);
    if(ch/1==ch){

        printf("it is a number");
        break;
        switch(ch)
    {
        case 'A' ... 'Z':
        printf("Upper case");
        break;

        case 'a' ... 'z':
        printf("lower case");
        break;
        default:
        printf("special char");
    }
}
    return 0;
}
