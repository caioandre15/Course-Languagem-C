#include <stdio.h> // Inclue a biblioteca padrão I/O.

int main(){
	// Declarando a variável.
	int idade;

	// Função que escreve na tela:
	printf("Qual é sua idade? \n");
	// Limpa o buffer de saída para garantir que a mensagem seja exibida imediatamente.
	fflush(stdout);

	// Função que recebe entrada via teclado:
	scanf("%d", &idade);

	// Função que escreve na tela exibindo valor da variável:
	printf("Sua idade é: %d", idade);

	return 0;
}
