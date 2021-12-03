//temperature conversion celsius to fahrenheit and vice versa
#include<stdio.h>
int main(){
 float fh,cl;
 int choice;
 printf("1:convert temerature from fahrenheit to celsius\n");
 printf("2:convert temerature from celsius to fahrenheit\n");
 printf("\n Enter your choice 1,2\n");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:printf("\nEnter temperature in fahrenheit\n");
         scanf("%f",&fh);
         cl=(fh-32)/1.8;
         printf("temperature in celsius:%2.f\n",cl);
         break;
  case 2:printf("\nEnter temperature in celsius\n");
         scanf("%f",&cl);
         fh=(cl*1.8)+32;
         printf("temperature in fahrenheit:%2.f\n",fh);
         break;
 }
return 0;
}
