 //area 
 #include<stdio.h>
 float area(float);
 float area(float r)
     {
       float ar,pia=3.14;
       ar=pia*r*r;
       return(ar);
  }
int main(){
   float x,r;
   printf("enter the radius of the circle\n");
   scanf("%f",&r);
   x=area(r);
   printf("area of the circle:%0.2f\n",x);
 return 0;
}
