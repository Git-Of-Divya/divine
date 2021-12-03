//greatest among three number
#include<stdio.h>
void great(int,int,int);
  void great(int a,int b,int c){
    if(a>b&&a>c)
     printf("a is greatest");
    else
     if(b>a&&b>c)
       printf("b is greatest");
     else
       printf("c is greatest");  
} 
int main(){
 int a,b,c;
 printf("Enter three numbers\n");
 scanf("%d %d %d\n",&a,&b,&c);
 great(a,b,c);
return 0;
}

