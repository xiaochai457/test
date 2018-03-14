#include <stdio.h>
#include "score.h"

void output_results(int marks[], int statistics[]){
	// a stub
	int i;	
	printf("this is given from output_result\n");
	printf("These are the marks: \n");
	for(i=0; marks[i]!=-1; i++)
		printf("%4d", marks[i]);
	
	printf("\nThese are the statistics:\n");
	for(i=0; i<6; i++)
		printf("Mark %d: %d hits\n", i, statistics[i]);
}
