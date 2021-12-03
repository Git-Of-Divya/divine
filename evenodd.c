//check whether a number is even or odd using switch case
#include<stdio.h>
int main(){
  int a;
  printf("Enter a number");
  scanf("%d",&a);
  
  switch(a%2)
  {
   case 0:printf("even");break;
   case 1:printf("odd");break;
  }
}

