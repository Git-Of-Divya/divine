//calculator
#include<stdio.h>
void cal(int *p,int *q,char *r){
  switch(*r){
 case'+':printf("%d+%d=%d",*p,*q,*p+*q);break;
 case'-':printf("%d-%d=%d",*p,*q,*p-*q);break;
 case'*':printf("%d*%d=%d",*p,*q,(*p)*(*q));break;
 case'/':printf("%d/%d=%d",*p,*q,*p/(*q));break;
 case'%':printf("%d/%d=%d",*p,*q,*p%*q);break;
 default:printf("invalid operator");
 }
}
int main(){
 char op,*r;
 r=&op;
 int first,second,*p,*q;
 p=&first;
 q=&second;
 printf("enter an operator (+,-,*,/)\n");
 scanf("%c",r);
 printf("enter two operand\n");
 scanf("%d%d",p,q);
 cal(p,q,r);
return 0;
}
