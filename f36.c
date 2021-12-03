//The number is positive or negative
#include<stdio.h>
void check(int);
int main(){
 int num;
 printf("Enter a number");
 scanf("%d",&num);
 check(num);
 return 0;
}
void check(int a){
 if(a>0)
  printf("no. is positive");
 else
  if(a<0)
   printf("no. is negative");
  else
   printf("no. is neither positive nor negative");
}
