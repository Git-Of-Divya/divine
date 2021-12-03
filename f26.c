//input any character and check whether it is alphabet,digit or special character
#include<stdio.h>
void checker(char);
int main(){
 char ch;
 printf("Enetr an character");
 scanf("%c",&ch);
 checker(ch);
return 0;
}
void checker(char ch){
   if(ch>=65&&ch<=90||ch>=97&&ch<=122)
    printf("alphabet");
   else
    if(ch>=48&&ch<=57)
     printf("digit");
    else
     printf("special character");
 }
