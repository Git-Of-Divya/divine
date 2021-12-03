//calculate sum of natural numbers
#include<stdio.h>
int main(){
 int n,i,sum=0;
 printf("Enter a positive number");
 scanf("%d",&n);
 i=1;
 
 while(i<=n){
   sum+=i;
   ++i;
  }
  printf("sum of natural numbers=%d\n",sum);
return 0;
}
