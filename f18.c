//A character is an Alphabet or not
#include<stdio.h>
void Alpha(char);
 void Alpha(char ch){
  if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
   printf("character is an alphabet");
  else
   printf("character is not an alphabeta");
 }
int main(){
 char ch;
 printf("Enter an character");
 scanf("%c",&ch);
 Alpha(ch);
return 0;
}
