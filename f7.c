//percentage of 5 subjects
#include<stdio.h>
void per(int,int,int,int,int);
    void per(int a,int b,int c,int d,int e){
      int perc;
      perc=(a+b+c+d+e)/5.0f;
    printf("percentage:%.2f",(float)perc);  
 }
int main(){
   int acc,boc,gst,tax,math;
   printf("Enter the marks of accounts\n");
   scanf("%d",&acc);
   printf("Enter the marks of boc\n");
   scanf("%d",&boc);
   printf("Enter the marks of gst\n");
   scanf("%d",&gst);
   printf("Enter the marks of tax\n");
   scanf("%d",&tax);
   printf("Enter the marks of math\n");
   scanf("%d",&math);
   per(acc,boc,gst,tax,math);
return 0;
}   
