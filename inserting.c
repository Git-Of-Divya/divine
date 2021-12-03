//Insert an array desired or specific position in an array
#include<stdio.h>
int main(){
 int ele,pos,i,n;
 
  printf("enter length of array\n");
  scanf("%d",&n); 
  int a[n];
   for(i=0;i<n;i++){
      printf("enter %d element\n",(i+1));
      scanf("%d",&a[i]);
      }
      
   printf("Before inserting the element,The array...........\n");
   for(i=0;i<n;i++){
    printf("%d\n",a[i]);
    }
    
   printf("insert an element\n");
   scanf("%d",&ele);
   printf("enter position\n");
   scanf("%d",&pos);
      
   printf("After inserting the element..........\n");
    for(i=n-1;i>=pos-1;i--)
     {
       a[i+1]=a[i];
     }
       a[pos-1]=ele;
       n=n+1;
       for(i=0;i<n;i++)
        printf("%d\n",a[i]);       
 return 0;
}
