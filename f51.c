//printf total number of days in a month using switch case
#include<stdio.h>
void month(int *);
int main(){
 int num,*p;
 p=&num;
 printf("Enter a month number\n");
 scanf("%d",p);
 month(p);
return 0;
}
void month(int *p){
 switch(*p)
  {
   case 1:
    printf("31");//jan
    break;
   case 2:
    printf("28/29");//feb
    break;
   case 3:  
    printf("31");//mar
    break;
   case 4:
    printf("30");//apr
    break;
   case 5:
    printf("31");//may
    break;
   case 6:
    printf("30");//june
    break;
   case 7:
    printf("31");//july
    break;
   case 8:
    printf("31");//aug
    break;
   case 9:
    printf("30");//sep
    break;
   case 10:
    printf("31");//oct
    break;
   case 11:
    printf("30");//nov
    break;
   case 12:
    printf("31");//dec
    break;
   }
}
