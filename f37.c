//Find the maximum between three numbers
#include<stdio.h>
void max(int,int,int);
  void max(int a,int b,int c){
    if(a>b&&a>c)
     printf("a is maximum number");
    else
     if(b>a&&b>c)
       printf("b is maximum number");
     else
       printf("c is maximum number");  
} 
int main(){
 int a,b,c;
 printf("Enter three numbers\n");
 scanf("%d %d %d\n",&a,&b,&c);
 great(a,b,c);
return 0;
}

