//check whether a number is divisibile by 5 and 11 or not 
#include<stdio.h>
void divisor(int);
  void divisor(int a){
    if(a%5==0&&a%11==0)
      printf("given number is divisible by 5 and 11\n");
    else
     if(a%5==0)
      printf("given number is only divisible by 5\n");
     else
       if(a%11==0)
         printf("given number is only divisible by 11\n");
       else
         printf("given number is not divisible by 5 and 11\n");
  }
int main(){
 int a;
 printf("enter a number\n");
 scanf("%d",&a);
 divisor(a);
return 0;
}
