//Delet elements from array at desired or specific position
#include<stdio.h>
int main(){
 int pos,n,i;
 
 printf("enter length of array");
 scanf("%d",&n);
  int a[n];
   for(i=0;i<n;i++)
   {
     printf("Enter %d element \n",(i+1));
     scanf("%d",&a[i]); 
   }
   
 printf("enter position");
 scanf("%d",&pos);
            
 for(i=pos;i<n;i++){
   a[i-1]=a[i];
   }
   n=n-1;
             
 for(i=0;i<n;i++)
  printf("%d\n",a[i]);  
 return 0;
}
