//convert a person's name in abbreviated
#include<stdio.h>
void abbriname();
 void abbriname(){
  char fname[10],mname[10],lname[10];
  printf("Enter full name(first middle last)\n");
  scanf("%s%s%s",fname,mname,lname);
  printf("abbreviated name:");
  printf("%c,%c,%s\n",fname[0],mname[0],lname);
 }
int main(){
 abbriname();
 return 0;
}
