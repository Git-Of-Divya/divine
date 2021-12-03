//Read integer(N) and print the first three powers(N^1,N^2,N^3)
#include<stdio.h>
void power(int);
 void power(int num){
  int a,b,c;
  a=num;
  printf("N^1:%d\n",a);
  b=num*num;
  printf("N^2:%d\n",b);
  c=num*num*num;
  printf("N^3:%d\n",c);
}
int main(){
 int num;
 printf("Enter a number");
 scanf("%d",&num);
 power(num);
return 0;
}
 
