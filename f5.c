//simple interest
#include<stdio.h>
float si(float,float,float);
 float si(float p,float r,float t)
 {
  float it;
  it=p*r*t/(100.0f);
  return it;
 }
 int main()
 {
  float p,r,t;
  printf("Enter principal amount\n");
  scanf("%f",&p);
  printf("Enter rate\n");
  scanf("%f",&r);
  printf("Enter time\n");
  scanf("%f",&t);
  si(p,r,t);
  printf("simple interest:%0.2f\n",si(p,r,t));
 return 0;
 }
