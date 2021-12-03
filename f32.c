//check whether the triangle is an equilateral,isosceles or scalene triangle.
#include<stdio.h>
void triangle(int,int,int);
 void triangle(int a,int b,int c){
   if(a==b==c)
    printf("this is an equilateral triangle\n");
   else
     if(a==b||b==c||c==a)
       printf("this is an isosceles triangle\n");
     else
       printf("this is a scalene triangle\n");
    }
int main(){
 int a,b,c;
  printf("enter 3 sides\n");
  scanf("%d%d%d",&a,&b,&c);
  triangle(a,b,c);
  return 0;
}
