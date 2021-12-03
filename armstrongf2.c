//Find number is armstrong or not.
#include<stdio.h>
int main(){
 int n,r,s=0,temp;
 printf("Enter a number\n");
 scanf("%d",&n);
  temp=n;
  while(n!=0){
   r=n%10;
   s=s+r*r*r;
   n=n/10;
   }
   if(s==temp)
    printf("Armstrong");
   else
    printf("not armstrong"); 
return 0;
}
