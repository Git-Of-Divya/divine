//The date is correct or not
#include<stdio.h>
int main(){
 int dd,mm,yy;
 
 printf("Enter date(dd,mm,yyyy format)");
 scanf("%d/%d/%d",&dd,&mm,&yy);
 
 if(yy>=99&&yy<=9999)
  {
   if(mm>=1&&mm<=12)
    {
     if((dd>=1&&dd<=31)&&(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12))
       printf("Date is valid\n");
     else 
       if((dd>=1&&dd<=30)&&(mm==4||mm==6||mm==9||mm==11))
        printf("Date is valid\n");
       else 
        if((dd>=1&&dd<=28)&&(mm==2))
         printf("Date is valid\n");
        else
         if(dd==29&&mm==2&&(yy%400==0||(yy%4==0&&yy%100!=0)))
          printf("Date is valid\n");
         else
          printf("Date is invalid\n");
    }
     else
     {
      printf("month is not valid\n");
     }
  }
  else
  {
   printf("year is not valid\n");
  }
return 0;
}
