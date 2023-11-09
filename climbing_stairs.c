#include<stdio.h>
int fact(int n){
  if(n==1)
  return 1;
  else
  return n*fact(n-1);
}
int ClimbingStairs(int p){
  int r=1,n,c=0;
  n=fact(p);
  // for(int i=0;i<p;i++){
  //   n/(n-r);
  //   r++;
  //   c++;
  // }
  return n/(n-r);
}
int main(){
  int n;
  printf("Enter the number of stairs : ");
  scanf("%d",&n);
  int t = ClimbingStairs(n);
  printf("number of ways are %d",t);
  return 0;
}
