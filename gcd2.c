//Find gcd of two numbers
#include<stdio.h>
int main(){
  int num1,num2,i,min,gcd=1;
  printf("Enter two numbers");
  scanf("%d%d",&num1,&num2);
   min=(num1<num2)?num1:num2;
     i=min;
     for(i=min;min>1;i--)
    {
     if(num1%i==0&&num2%i==0)
    {
     gcd=i;
     break;
   }
 }
 printf("gcd is %d",gcd);
return 0;
}
