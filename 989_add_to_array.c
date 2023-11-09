#include<stdio.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* addToArrayForm(int* num, int numSize, int k, int* returnSize){
    // *returnSize=numSize;
    int t,sum=0;
    for(int i=0;i<numSize;i++){
        t=num[i]*(10^(numSize-i));
        sum=sum+t;
    }
    sum=sum+k;
    int i=0,c=0;
    while(sum!=0){
        sum=sum/10;
        c++;
    }
    returnSize=c;

    return sum;
}
int main() {
    int num[] = {2, 7, 4};
    int numSize = 3;
    int k = 181;
    int returnSize;
    int* result = addToArrayForm(num, numSize, k, &returnSize);

    printf("Result: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d", result[i]);
    }
    printf("\n");

    free(result); // Free the result array
    return 0;
}
