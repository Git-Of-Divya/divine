//denomination of an amount
#include<stdio.h>
int main(){
 int a[10]={2000,500,200,100,50,20,10,5,2,1};
 int amt,temp,i;
 printf("Enter the amont");
 scanf("%d",&amt);
  temp=amt;
  i=0;
  while(i<10)
  {
   printf("\n%d notes is %d",a[i],temp/a[i]);
   temp=temp%a[i];
   i++;
  }
return 0;
}
