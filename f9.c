//The display size of the Different Data Type
#include<stdio.h>
void size();
 void size(){
  int intType;
  float floatType;
  char charType;
  double doubleType;
   printf("size of int:%ld bytes\n",sizeof(intType));
   printf("size of float:%ld bytes\n",sizeof(floatType));
   printf("size of char:%ld bytes\n",sizeof(charType));
   printf("size of double:%ld bytes\n",sizeof(doubleType));
}
int main(){
 size();
return 0;
}
