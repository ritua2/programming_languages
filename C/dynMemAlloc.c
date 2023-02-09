/* to compile: gcc -o dynMemAlloc dynMemAlloc.c */

#include<stdio.h>
#include<stdlib.h>

int main(){
	int numStudents, avg, *ptr, i, sum = 0;

	printf("Enter the num of students :");
	fflush(stdout);
	scanf("%d",&numStudents);
	ptr=(int *)malloc(numStudents*sizeof(int));
	if(ptr== NULL){
		printf("\n\nMemory allocation failed!");
		fflush(stdout);
		exit(1);
	}
	for (i=0; i<numStudents; i++){
		printf("\nEnter the marks for the student %d\n", i+1);
		fflush(stdout);
		scanf("%d",(ptr+i));
	}
	for (i=0; i<numStudents; i++){
		sum = sum + *(ptr + i);
	}
	avg = sum/numStudents;
	printf("\nAvg marks = %d ",avg);
	fflush(stdout);
	free(ptr);
	return 0;
}


