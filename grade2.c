//Find a grade of given marks 
#include<stdio.h>
void grade(int p){
  switch(p/10)
  {
  case 10:
  case 9:
    printf("Grade A");
    break;
  case 8:
    printf("Grade B");
    break;
  case 7:
    printf("Grade C");
    break;
  case 6:
    printf("Grade D");
    break;
  case 5:
    printf("Grade E");
    break;
  default:
    printf("Grade F");
    break;
  }
}
int main(){
  int score,*p;
  p=&score;
  printf("Enter score(0-100)");
  scanf("%d",p);
  grade(p);
}
