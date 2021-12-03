//The number is even or odd
#include<stdio.h>
void check(int);
 void check(int a){
  if(a%2==0)
   printf("even");
  else
   printf("odd");
 }
int main(){
  int a;
  printf("Enter a number");
  scanf("%d",&a);
  check(a);
}
 
