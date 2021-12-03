//denomination of an amount
#include<stdio.h>
void denomi(int amt){
 int i;
  temp=amt;
  for(i=0;i<10;i++)
  {
   printf("\n%d notes is %d",a[i],temp/a[i]);
   temp=temp%a[i];
  }
}
int main(){
 int a[10]={2000,500,200,100,50,20,10,5,2,1};
 int amt;
 printf("Enter the amont");
 scanf("%d",&amt);
  denomi(amt);
return 0;
}
