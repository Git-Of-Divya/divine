//Factorial of a given number
#include<stdio.h>
int fac(int);
  int fac(int num){
    int i,flag=1;
    for(i=num;i>0;i--){
    flag=flag*num;
    num--;
   }
   return flag;
 }
int main(){
  int num;
  printf("Enetr a number\n");
  scanf("%d",&num);
  fac(num);
  printf("factorial of the number:%d\n",fac(num));
return 0;
}
