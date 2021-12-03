//Calculate profit or loss
#include<stdio.h>
void prtlo(int,int);
 void prtlo(int cp,int sp){
  int amt;
   if(sp>cp)
   {
    amt=sp-cp;
    printf("profit=%d\n",amt);
   }
   else
    if(cp>sp)
    {
     amt=cp-sp;
     printf("loss=%d\n",amt);
    }
    else
     printf("neither loss nor profit");
 }
int main(){
 int cp,sp;
 printf("Enter cost price\n");
 scanf("%d",&cp);
 printf("Enter selling price\n");
 scanf("%d",&sp);
 prtlo(cp,sp);
return 0;
}
