//Find the day
#include<stdio.h>
void week(int *);
int main(){
 int num,*p;
  p=&num;
  printf("Enter a number\n");
  scanf("%d",p);
  week(p);
return 0;
}
void week(int *p){
 switch(*p)
 {
  case 1: printf("sunday");
         break;
  case 2:printf("monday");
         break;
  case 3:printf("tuesday");
         break; 
  case 4:printf("wednesday");
         break;
  case 5:printf("thursday");
         break;
  case 6:printf("friday");
         break;
  case 7:printf("saturday");
         break;
  }
}
