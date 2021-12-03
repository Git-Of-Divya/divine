//uppercase, lowercase,special or digit
#include<stdio.h>
void check(char);
 void check(char ch){
  if(ch>=65&&ch<=90)
   printf("uppercase");
  else
   if(ch>=97&&ch<=122)
    printf("lowercase");
   else
    if(ch>=48&&ch<=57)
     printf("number");
    else
     printf("symbol");
 }
int main(){
 char ch;
 printf("Enetr an character");
 scanf("%c",&ch);
 check(ch);
}
