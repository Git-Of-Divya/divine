//calculator
#include<stdio.h>
void cal(int first,int second,int op){
  switch(op){
 case'+':printf("%d+%d=%d",first,second,first+second);break;
 case'-':printf("%d-%d=%d",first,second,first-second);break;
 case'*':printf("%d*%d=%d",first,second,first*second);break;
 case'/':printf("%d/%d=%d",first,second,first/second);break;
 case'%':printf("%d/%d=%d",first,second,first%second);break;
 default:printf("invalid operator");
 }
}
int main(){
 char op;
 int first,second;
 printf("enter an operator (+,-,*,/)\n");
 scanf("%c",&op);
 printf("enter two operand\n");
 scanf("%d%d",&first,&second);
 cal(first,second,op);
return 0;
}
