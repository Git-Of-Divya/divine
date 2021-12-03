//print a calender taking input from user using loop
#include<stdio.h>
int main(){
 int i,noofdays;
 int first;
 printf("Enter no of days in a month\n");
 scanf("%d",&noofdays);
 printf("Enter first day in a month\n");
 scanf("%d",&first);
 for(i=1;i<first;i++)
  printf(" ");
 for(i=1;i<noofdays;i++)
 {
  printf("%3d",i);
  if((first+i-1)%7==0)
   printf("\n");
  }
  return 0;
}
