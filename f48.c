//print multiplication table
#include<stdio.h>
int main(){
 int i,num;
  printf("Enter number to print table");
  scanf("%d",&num);
  i=0;
  do{
   printf("%d*%d=%d\n",num,i,(num*i));
   i++;
  }while (i<10);
return 0;
}
