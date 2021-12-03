//calculator
#include<stdio.h>
int main(){
char op;
int first,second;
printf("enter an operator (+,-,*,/)\n");
scanf("%c",&op);
printf("enter two operand\n");
scanf("%d%d",&first,&second);

switch(op){
 case'+':printf("%d+%d=%d",first,second,first+second);break;
 case'-':printf("%d-%d=%d",first,second,first-second);break;
 case'*':printf("%d*%d=%d",first,second,first*second);break;
 case'/':printf("%d/%d=%d",first,second,first/second);break;
 case'%':printf("%d/%d=%d",first,second,first%second);break;
 default:printf("invalid operator");
}
return 0;
}
