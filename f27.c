//input week number and print week day
#include<stdio.h>
void week(int);
int main(){
 int num;
  printf("Enter a number\n");
  scanf("%d",&num);
  week(num);
return 0;
}
void week(int a){
 if(a<=7)
 {
  if(a==1)
   printf("sunday");
  if(a==2)
   printf("monday");
  if(a==3)
   printf("tuesday");
  if(a==4)
   printf("wednesday");
  if(a==5)
   printf("thursday");
  if(a==6)
   printf("friday");
  if(a==7)
   printf("saturday");
  }
 else
  printf("invalid number");
 
}
