#include <stdio.h>

int main(){

	int j,r;
	scanf("%d %d", &j, &r);
	int pontuacao[j], i, k;

	for(i = 0; i < j; i++){
		pontuacao[i] = 0;
	}

	for(i = 0; i < r; i++){
		int ponto;

		for(k = 0; k < j; k++){
			scanf("%d", &ponto);
			pontuacao[k] += ponto;
		}
	}

	int maior_pontuacao = 0;
	int melhor_jogador = 0;

	for(i = 0; i < j; i++){
		if(pontuacao[i] > maior_pontuacao){
			melhor_jogador = i;
			maior_pontuacao = pontuacao[i];
		}else if(pontuacao[i] == maior_pontuacao){
			melhor_jogador = i;
		}
	}

	printf("%d\n", melhor_jogador + 1);

	return 0;
}