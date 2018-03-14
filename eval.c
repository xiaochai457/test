#include "score.h"
#include <stdio.h>

void evaluation(int *scores, int *marks){
	printf("this is from evaluation.\n");
	int i;

	for(i=0; i<MAX && scores[i]!=-1; i++){
		if( *(scores+i)>=0 && *(scores+i)<=30) *(marks+i)=0;
		if( *(scores+i)>30 && *(scores+i)<=45) *(marks+i)=1;
		if( *(scores+i)>45 && *(scores+i)<=60) *(marks+i)=2;
		if( *(scores+i)>60 && *(scores+i)<=75) *(marks+i)=3;
		if( *(scores+i)>75 && *(scores+i)<=90) *(marks+i)=4;
		if( *(scores+i)>90 && *(scores+i)<=100) *(marks+i)=5;
	}
	*(marks+i)=-1;

}
