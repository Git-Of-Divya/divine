//check whether an alphabet is a vowel or consonant using a switch case
#include<stdio.h>
int main(){
 char ch,*p;
 p=&ch;
 printf("Enter an alphabet\n");
 scanf("%c",p);
  
 switch(p)
 {
  case 'a':
   printf("vowel");
   break;
  case 'e':
   printf("vowel");
   break;
  case 'i':
   printf("vowel");
   break;
  case 'o':
   printf("vowel");
   break;
  case 'u':
   printf("vowel");
   break;
  default:
   printf("consonant");
   break;
 }
return 0;
}
