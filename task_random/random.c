#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int max, min, n, i, random;
	srand(time(NULL));

	printf("Please enter the range for random, maximum and minimum:");
	scanf("%d %d", &max, &min);

	printf("How many random numeber you want to generate?");
	scanf("%d", &n);

	for (i=0; i<n; i++){
		random = (rand()%max+min);
		printf("%d ", random);
	}

	return 0;
}