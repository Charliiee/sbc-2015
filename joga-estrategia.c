#include <stdio.h>

int main(){

	int j,r;
	scanf("%d %d", &j, &r);
	int pontuacao[j], i, k;

	for(i = 0; i < j; i++){
		pontuacao[i] = 0;
	}

	for(i = 0; i < r; i++){
		int maior_ponto = 0;
		int jogador = 0;
		int ponto;

		for(k = 0; k < j; k++){
			scanf("%d", &ponto);
			if(ponto > maior_ponto){
				maior_ponto = pontuacao[k];
				jogador = k;
			}
			else if(ponto == maior_ponto && (k + 1) == j){
				jogador = k;
			}
		}

		pontuacao[jogador]++;
		printf("Melhor jogador da rodada %d eh %d com %d pontos\n", i, jogador, pontuacao[jogador]);
	}

	int maior_pontuacao, melhor_jogador;
	maior_pontuacao = melhor_jogador = 0;

	for(i = 0; i < j; i++){
		if(pontuacao[i] > maior_pontuacao){
			maior_pontuacao = pontuacao[i];
			melhor_jogador = i;
		}
	}

	printf("%d\n", melhor_jogador + 1);

	return 0;
}