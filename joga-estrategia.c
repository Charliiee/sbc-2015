#include <stdio.h>

int main(){

	int j,r;
	scanf("%d %d", &j, &r);
	int jogadas[j][r];

	for(int i = 0; i < r; i++){
		for(int k = 0; k < j; k++){
			scanf("%d", &jogadas[i][k]);
		}
	}

	printf("Fim...\n\n\n");

	for(int i = 0; i < r; i++){
		for(int k = 0; k < j; k++){
			printf(" %d ", jogadas[i][k]);
		}
	}

	return 0;
}