//sort a float array in ascending and descending order
#include<stdio.h>
void sort(int n){
//gets the elements
 printf("enter the elements in array\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 
 //sort the array
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(a[j]>a[i])
   {
     tmp=a[i];
     a[i]=a[j];
     a[j]=tmp;
   }
  }
 }
 
 //print in ascending order
 printf("\nAscending order\n");
 for(i=0;i<n;i++)
 {
  printf("%3d",a[i]);
 }
 
 //arrage in descending order
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(a[j]<a[i])
   {
     tmp=a[i];
     a[i]=a[j];
     a[j]=tmp;
   }
  }
 }
 
 //printf in descending order
 printf("\ndescending order\n");
 for(i=0;i<n;i++)
 {
  printf("%3d",a[i]);
 }
}
int main(){
 int a[100],n,i,j,tmp;
 printf("enter the size of array\n");
 scanf("%d",&n);
 sort(n);
return 0;
}
