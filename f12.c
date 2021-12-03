//LCM of two numbers
#include<stdio.h>
void lcm(int,int);
  void lcm(int num1,int num2){
    int i,max,lcm=1;
     max=(num1>num2)?num1:num2;
     i=max;
     while(1)
    {
     if(i%num1==0&&i%num2==0)
    {
     lcm=i;
     break;
   }
  i+=max;
 }
 printf("LCM of %d and %d=%d",num1,num2,lcm);
}
int main(){
 int num1,num2;
 printf("Enter any two numbers\n");
 scanf("%d%d",&num1,&num2);
 lcm(num1,num2);
 return 0;
}
