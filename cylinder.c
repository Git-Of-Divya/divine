//Find radius,circumference and volume of cylinder
#include<stdio.h>
int main(){
 float pia=3.14,d,r,h,c,v;
 int choice;
 printf("Enter the diameter of a cylinder");
 scanf("%f",&d);
 printf("Enter the height of a cylinder");
 scanf("%f",&h);
 printf("Enter your choice(1,2,3)");
 scanf("%d",&choice);
 
 switch(choice){
   case 1:
     r=d/2.0f;
     printf("radius of cylinder:%.2f\n",r);
     break;
     
  case 2:
     r=d/2.0f;
     c=2*pia*r*r+2*pia*r*h;
     printf("circumference of cylinder:%.2f\n",c);
     break;
     
  case 3:
     r=d/2.0f;
     v=pia*r*r*h;
     printf("volume of cylinder:%.2f\n",v);
     break;
   }
}
