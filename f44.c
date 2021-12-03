//check whether a character is an uppercase or lowercase alphabet.
#include<stdio.h>
void check(char);
 void check(char ch){
  if(ch>=65&&ch<=90)
   printf("uppercase");
  else
   if(ch>=97&&ch<=122)
    printf("lowercase");
 }
int main(){
 char ch;
 printf("Enetr an character");
 scanf("%c",&ch);
 check(ch);
}
