//Find the maximum between two number
#include<stdio.h>
void max(int,int);
 void max(int a,int b){
  if(a>b)
   printf("a is maximum number");
  else
   printf("b is maximum number");
 }
int main(){
 int a,b;
 printf("Enter two numbers\n");
 scanf("%d %d",&a,&b);
 great(a,b);
return 0;
}

