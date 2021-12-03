//Find the maximum between two n8umbers using the switch case
#include<stdio.h>
int main(){
 int a,b;
 printf("Enter two numbers\n");
 scanf("%d%d",&a,&b);
 
 switch((a>b?a:b))
 {
  case 'a':printf("a is maximum");break;
  case 'b':printf("b is maximum");break;
 }
return 0;
}
