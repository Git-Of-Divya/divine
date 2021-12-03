//converting temperature celsius into fahrenheit
#include<stdio.h>
void temperature(float);
 void temperature(float c){
   float fah;
   fah=(c*9/5)+32;
   printf("%.2f celsius=%.2f Fahrenheit\n",c,fah);
}
int main(){
  float celsius;
  printf("Enter temperature in celsius\n");
  scanf("%f",&celsius);
  temperature(celsius);
 return 0;
}
