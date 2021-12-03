//Input any alphabet and check whether it is vowel or consonant
#include<stdio.h>
void vowcon(char);
 void vowcan(char c){
  int lc,uc;
   lc=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
   uc=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
  if(lc||uc)
   printf("%c is a vowel",c);
  else
   printf("%c is a consonant",c);
   
 }
int main(){
 char c;
 printf("Enter an character");
 scanf("%c",&c);
 vowcan(c);
}
 
