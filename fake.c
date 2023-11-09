#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,t,r,x;
    printf("value of r : %d\n",r);
    printf("Enter num : ");
    scanf("%d",&n);
    //printf("value of r : %d\n",r);
    while(n>0){
        x=n%10;
        t=t*10+x;
        n=n/10;
    }
    printf("%d",t);
    return 0;
}
