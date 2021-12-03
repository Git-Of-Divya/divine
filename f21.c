//greatest of two number
#include<stdio.h>
void great(int,int);
 void great(int a,int b){
  if(a>b)
   printf("a is greatest");
  else
   printf("b is greatest");
 }
int main(){
 int a,b;
 printf("Enter two numbers\n");
 scanf("%d %d",&a,&b);
 great(a,b);
return 0;
}

