//count the total number of notes in given amount
#include<stdio.h>
void counter(int);
int main(){
 int amount;
 printf("Enter an amount");
 scandf("%d",&amount);
 counter(amount);
return 0;
}
void counter(int amt){
 int n2000,n500,n100,n50,n20,n10,n5;
 if(amt<=5)
  {
   n5=amt/5;
   amt-=n5*5;
  }
 else
  if(amt<=10)
   
}
