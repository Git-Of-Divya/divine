//ascii value of a character 
#include<stdio.h>
void ascii(char);
   void ascii(char ch){
     printf("ASCII value of%c is%d",ch,ch);
   }
int main(){
char ch;
printf("Enter the character");
scanf("%c",&ch);
ascii(ch);
return 0;   
}
     
