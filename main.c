#include <stdio.h>
#include <stdlib.h>
#define N_student 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int grade[N_student];
	int i, average, sum;
	sum = 0;
	
	printf("input 5 scores : ");
	
	for (i=0; i<N_student; i++){
		scanf("%d", &grade[i]);
		sum += grade[i];
	}
	
	average = sum / N_student;
	printf("score average : %i\n", average);
	
	return 0;
}
