//function
#include<stdio.h>
void mrd();
void hsd();
void hollow right();
void right triangle();
void square();
void rhombus();
void hollow rhombus();
void hollow mirhom();
void mirhom();
void imrt();
void irt();
void
void
void
void
void
void
void
void
void
    void mrd(){
             int i,j,n;
               printf("enter a digit");
               scanf("%d",&n);
                 for(i=n;i>=1;i--){
                  for(j=1;j<=n;j++){
                     if(j>=i)
                        printf("*");
                     else
                        printf(" ");
                        }
                       printf("\n");
                      }
                     }
    void hsd(){
            int i,j,n;
             printf("enter a value");
             scanf("%d",&n);
              if(n>4){
               for(i=1;i<=n;i++){
                 for(j=1;j<=n;j++){
                   if(i==1||j==1||i==n||j==n||i==j||j==(n-i+1))
                     printf("*");
    	           else
    	             printf(" ");
                    }
                   printf("\n");
                  }
                 }
             else
             printf("invalid input"); 
           }
   void hollow rght(){
     int i,j,n;
       printf("enter a digit");
       scanf("%d",&n);
         for(i=1;i<=n;i++){
           for(j=1;j<=n;j++){
            if(i==n||j==1||i==j)
              printf("*");
            else
              printf(" ");
             }
            printf("\n");
           }
          }
     
   void right triangle(){
         int i,j,n;
       printf("enter a number");
       scanf("%d",&n);
        for(i=1;i<=n;i++){
         for(j=1;j<=i;j++){
          printf("*");
          }
         printf("\n");
        }
      }
   void square(){
      int i,j,n;
       printf("enter a number");
       scanf("%d",&n);
        for(i=1;i<=n;i++){
          for(j=1;j<=n;j++){
            printf("*");
            }
           printf("\n");
          }
        }
   void rhombus(){
     int i,j,space,n;
       printf("enter a number");
       scanf("%d",&n);
         for(i=n;i>=1;i--){
           for(space=1;space<i;space++)
             printf(" ");
           for(j=1;j<=n;j++)
             printf("*");
              printf("\n");
              }  
            }
    void hollow rhombus(){
      int i,j,space,n;
        printf("enter a number");
        scanf("%d",&n);
           for(i=n;i>=1;i--){
             for(space=1;space<i;space++)
               printf(" ");
             for(j=1;j<=n;j++){
               if(i==1||i==n||j==1||j==n)
                 printf("*");
               else
                 printf(" ");
                }
               printf("\n");
              }
             }
   void hollow mirhom(){
     int i,j,n,space;
       printf("enetr a number");
       scanf("%d",&n);
         for(i=1;i<=n;i++){
           for(space=1;space<i;space++)
             printf(" ");
              for(j=1;j<=n;j++){
                if(i==1||i==n||j==1||j==n)
                   printf("*");
                else
                   printf(" ");
                   }
                  printf("\n"); 
                 }
                }
   void mirhom(){
    int i,j,n,space;
      printf("enter a number");
      scanf("%d",&n);
        if(n>1)
         {
          for(i=1;i<=n;i++){
           for(space=1;space<i;space++)
             printf(" "); 
           for(j=n;j>=1;j--)
             printf("*");
            printf("\n");
           }
         }
        else
       printf("invalid input");
      }
   void imrt(){
     int i,j,n;
       printf("enter a number");
       scanf("%d",&n);
       if(n>1)
        {
         for(i=n;i>=1;i--){
          for(j=1;j<=n;j++){
           if(i>=j)
             printf("*");
           else
             printf(" ");
            }
          printf("\n");
         }
        }
       else
       printf("invalid input");  
      }
   void irt(){
    int i,j,space,n;
      printf("enter a number");
      scanf("%d",&n);
       for(i=n;i>=1;i--){
         for(space=1;space<i;space++)
            printf(" ");
         for(j=1;j<=n;j++){
           if(i==1||i==n||j==1||j==n)
             printf("*");
           else
             printf(" ");
            }
           printf("\n");
          }
         }
int main(){
 int i;
  printf("enter a number");
  scanf("%d",&i); 
   switch(i>0){
    case 1:printf("mirrored right triangle\n");
           mrd();
           break;
    case 2:printf("hollow square star pattern with diagonal\n");
           hsd();
           break;
    case 3:printf("hollow right\n");
           hollow right();
           break;
    case 4:printf("right triagle");
           right triangle();
           break;
    case 5:printf("square star pattern");
           square();
           break;
    case 6:printf("star rhombus");
           rhombus();
           break;
    case 7:printf("hollow rhombus star pattrern");
           hollow rhombus();
           break;
    case 8:printf("hollow mirrored rhombus");
           hollow mirhom();
           break;
    case 9:printf("mirrored rhombus");
           mirhom();
           break;
    case 10:printf("inverted mirored right triangle");
            imrt();
            break;
    case 11:printf("inverted right trangle");
            irt();
            break;
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    

}   
    
return 0;
}
