//print multiplication table
#include<stdio.h>
void multi(int num){
 for(i=1;i<=10;i++)
  {
   printf("%d*%d=%d\n",num,i,(num*i));
  }
}
int main(){
 int i,num;
  printf("Enter number to print table");
  scanf("%d",&num);
  multi(num);
return 0;
}
