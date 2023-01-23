/* to compile: gcc -o passValue3 passValue3.c */

#include <stdio.h>
void addUpdate(int *a, int *b){
  int c;
  c = *a + *b;
  printf("Addition is : %d\n",c);
  *a = c;
  *b = c;
}

int main(){
  int a, b;
  printf("Enter Any 2 Numbers : ");
  fflush(stdout);
  scanf("%d %d",&a,&b);
  printf("a is: %d, b is: %d\n", a, b);
  fflush(stdout);
  addUpdate(&a, &b);
  printf("a is: %d, b is: %d\n", a, b);
  return 0;
}

