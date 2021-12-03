//area and circumference of a circle
#include<stdio.h>
float area(float);
float circumference(float);
     float area(float r)
     {
       float ar,pia=3.14;
       ar=pia*r*r;
       return(ar);
      }
     float circumference(float r)
     {
        float cf,pia=3.14;
        cf=2*pia*r;
        return(cf);
     }
int main(){
   float x,y,r;
   printf("enter the radius of the circle\n");
   scanf("%f",&r);
   x=area(r);
   printf("area of the circle:%0.2f\n",x);
   y=circumference(r);
   printf("circumference of the circle:%0.2f\n",y);
 return 0;   
}
     
