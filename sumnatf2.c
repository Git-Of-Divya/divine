//calculate sum of natural numbers
#include<stdio.h>
int main(){
 int n,i,sum=0;
 printf("Enter a positive number");
 scanf("%d",&n);
 i=1;
  do{
   sum+=i;
   ++i;
  }while(i<=n);
  printf("sum of natural numbers=%d\n",sum);
return 0;
}
