//area of triangle
#include<stdio.h>
void area(float,float);
   void area(float b,float h){
      float ar;
      ar=b*h/2;
     printf("area of the triangle:%0.2f\n",ar);
   }
int main(){
   float b,h;
   printf("enter the base of triangle\n");
   scanf("%f",&b);
   printf("enter the height of triangle\n");
   scanf("%f",&h);
   area(b,h);
}
