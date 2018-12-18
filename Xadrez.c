#include <stdio.h>
#include <stdlib.h>

int main() {
	int L, C; //l = linhas, C = colunas
	
	scanf("%d", &L);
	scanf("%d", &C);
	
	if(1 <= L && L <= 1000){
		if(1 <= C && C <= 1000){
		  putchar('\n');	
			if(L == C){ //Linhas e colunas iguais NxN (branco)
				printf("1");
			} else
				if(C%2 == 0 && L%2 == 0){//Linhas e colunas pares (branco)
					printf("1");
				} else
					if(C%2 != 0 && L%2 == 0){//Linha par e coluna impar (preto)
						printf("0");
					} else
						if(C%2 == 0 && L%2 != 0){//Linha impar e coluna par (preto)
							printf("0");
						} else 
							if(C%2 != 0 && L%2 != 0){//Linha e coluna impar (branco)
								printf("1");
							}
		}
	}	
	
	return 0;
}
