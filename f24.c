//Voting eligibility checker
#include<stdio.h>
void voter(int);
 void voter(int a){
   if(a>=18)
    printf("you are eligible for voting\n");
   else
    printf("you are not eligible for voting\n");
 }
int main(){
 int age;
 printf("Enter your age\n");
 scanf("%d",&age);
 voter(age);
return 0;
}
