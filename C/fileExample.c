/* to compile: gcc -o fileExample fileExample.c */

#include <stdio.h>
#include <stdlib.h>
int main() {
  int i, myInt;
  FILE *ifp;
  char *mode = "r";
  ifp = fopen("in.txt", mode);
  if (ifp == NULL) {
    fprintf(stderr, "Can't open input file in.txt!\n");
    exit(1);
  }else{
	  for (i=0; i<10; i++){
		  fscanf(ifp,"%d", &myInt);
	      printf("%d\n",myInt);
	  }
  }
  fclose(ifp);
  return 0;
}


