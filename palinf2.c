//check whether a number is palindrome or not
#include<stdio.h>
int main(){
 int n,r,s=0,temp;
 printf("Enter a number");
 scanf("%d",&n);
  temp=s;
 do{
  r=n%10;
  s=(s*10)+r;
  n=n/10;
 }while(n>0);
 if(temp==s)
  printf("palindrome");
 else
  printf("not palindrome");
}
