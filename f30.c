//input angles of a triangle and check whether the triangle is valid or not
#include<stdio.h>
void triangle(int,int,int);
 void triangle(int a,int b,int c){
  int sum;
   sum==a+b+c;
   if(sum==180)
    printf("triangle is valid\n");
   else
    printf("triangle is not valid\n");
 }
int main(){
 int a,b,c;
 printf("Enter the three angle of a triangle\n");
 scanf("%d %d %d",&a,&b,&c);
 triangle(a,b,c);
return 0;
}
