//Finf LCM of two number.
#include<stdio.h>
int main(){
 int num1,num2,i,max,lcm=1;
 printf("Enter any two numbers\n");
 scanf("%d%d",&num1,&num2);
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

 return 0;
}
