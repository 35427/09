#include <stdio.h>
#include <stdlib.h>
#define N_student 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int grade[N_student];
	int score[N_student];
	int i;
	
	
	for (i=0; i<N_student; i++){
		grade[i] = rand()%100 + 1;
	}
	
	for (i=0; i<N_student; i++){
		score[i] = grade[i];
	}
	
	for(i=0; i<N_student; i++)
	printf("score[%d] = %d (grade:%i)\n", i, score[i], grade[i]);
	
	return 0;
}
