//calculator
#include<stdio.h>
void cal(int *P,int *q,int *r){
  switch(r){
 case'+':printf("%d+%d=%d",first,second,first+second);break;
 case'-':printf("%d-%d=%d",first,second,first-second);break;
 case'*':printf("%d*%d=%d",first,second,first*second);break;
 case'/':printf("%d/%d=%d",first,second,first/second);break;
 case'%':printf("%d/%d=%d",first,second,first%second);break;
 default:printf("invalid operator");
 }
}
int main(){
 char op,*r;
 int first,second,*p,*q;
  p=&first;
  q=&second;
  r=&op;
 printf("enter an operator (+,-,*,/)\n");
 scanf("%c",r);
 printf("enter two operand\n");
 scanf("%d%d",p,q);
 cal(p,q,r);
return 0;
}
