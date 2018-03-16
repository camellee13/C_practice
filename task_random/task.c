#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i, en, ex, diet;
	srand(time(NULL));

	printf("Pro-environmental behavior: ");
	for (i=0; i<7; i++){
		en = (rand()%11)+1;
		printf("%d ", en);
	}

	printf("\n");

	printf("Exercise: ");
	for (i=0; i<7; i++){
		ex = (rand()%4)+1;
		printf("%d ", ex);
	}

	printf("\n");

	printf("Healthy diet behavior: ");
	for (i=0; i<7; i++){
		diet = (rand()%8)+1;
		printf("%d ", diet);
	}
	printf("\n");

	return 0;

}