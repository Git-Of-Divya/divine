//gross salary of an employee
#include<stdio.h>
void gross();
 void gross(){
   int gs,basic,da,ta;
   printf("Enter basic salary\n");
   scanf("%d",&basic);
    da=(10*basic)/100;
    ta=(12*basic)/100;
    gs=basic+da+ta;
  printf("\nGross salary:%d\n",gs);
 }
int main(){
gross();
return 0;
}
