#include <stdio.h>
int main(){
  FILE *fp;
  fp = fopen("in2.txt","a+");
  fprintf(fp,"\n%d",7000);
  fclose(fp);
  return 0;
}
