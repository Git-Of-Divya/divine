//check whether a year is a leap year or not
#include<stdio.h>
void leap(int);
 void leap(int a){
  if(a%4==0||a%400==0)
   printf("this is a leap year");
  else
   printf("this is not a leap year");
 }
int main(){
 int a;
 printf("Enter a year");
 scanf("%d",&a);
 leap(a);
return 0;
}
