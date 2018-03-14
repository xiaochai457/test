//this file contains the definition of function input_scores()
#include "score.h"
#include <stdio.h>	//printf() and scanf()

void input_scores(int *scores){
	int i, input=0;

	printf("Enter Scores, -1 to end:\n");
	for(i=0; i<MAX && input!=-1; i++){
		printf("%d: ", i+1);
		scanf("%d", &input);
		*(scores+i)=input;
	}
}
