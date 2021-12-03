//Input month number and print number of days in that month
#include<stdio.h>
void month(int);
int main(){
 int num;
 printf("Enter a month number\n");
 scanf("%d",&num);
 month(num);
return 0;
}
void month(int a){
 if(a<=12)
  {
   if(a==1)
    printf("31");//jan
   if(a==2)
    printf("28/29");//feb
   if(a==3)
    printf("31");//mar
   if(a==4)
    printf("30");//apr
   if(a==5)
    printf("31");//may
   if(a==6)
    printf("30");//june
   if(a==7)
    printf("31");//july
   if(a==8)
    printf("31");//aug
   if(a==9)
    printf("30");//sep
   if(a==10)
    printf("31");//oct
   if(a==11)
    printf("30");//nov
   if(a==12)
    printf("31");//dec
   }
 else
  printf("invalid input");
}
