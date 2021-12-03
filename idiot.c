//print "I AM  AN IDIOT" instead if your name using array
#include<stdio.h>
int main(){
 char ch[]="I AM AN IDIOT";
 char c='A';
  int i=0;
  printf("write your name\n\n");
  while(c)
  {
   c=getch();
   printf("%c\a",ch[i]);
   i++;
   if(i==14)
   {
    printf(" "),i=0;
   }
  }
return 0;
}
