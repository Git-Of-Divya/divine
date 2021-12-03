//Input all sides of a triangle and check whether the triangle is valid or not.
#include<stdio.h>
void triangle(int,int,int);
 void triangle(int s1,int s2,int s3){
  if((s1+s2)>s3&&(s2+s3)>s1&&(s3+s1)>s2)
   printf("triangle is valid\n");
  else
   printf("triangle is not valid\n");
 }
int main(){
 int s1,s2,s3;
 printf("Enter the three sides of triangle\n");
 scanf("%d %d %d",&s1,&s2,&s3);
 triangle(s1,s2,s3);
return 0;
}
