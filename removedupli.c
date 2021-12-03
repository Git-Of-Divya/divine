//Remove duplicates items in an array
#include<stdio.h>
int main(){
 int arr[100];
 int n,i,j,k;
 
 printf("Enter the size of array\n");
 scanf("%d",&n);
 
 printf("Enter the elements in an array\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(arr[i]==arr[j])
   {
    for(k=j;k<n-1;k++)
    {
     arr[k]==arr[k+1];
    }
    n--;
    j--;
   }
  }
 }
 printf("array elements after deleting duplicates\n");
 for(i=0;i<n;i++)
 {
  printf("%d\n",arr[i]);
 }
return 0;
}
