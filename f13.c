//GCD of two numbers
#include<stdio.h>
void gcd(int,int);
 void gcd(int num1,int num2){
   int i,min,gcd=1;
     min=(num1<num2)?num1:num2;
     i=min;
     while(min>1)
    {
     if(num1%i==0&&num2%i==0)
    {
     gcd=i;
     break;
   }
  i--;
 }
 printf("gcd is %d",gcd);
}
int main(){
  int a,b;
  printf("Enter two numbers");
  scanf("%d%d",&a,&b);
  gcd(a,b);
return 0;
}
