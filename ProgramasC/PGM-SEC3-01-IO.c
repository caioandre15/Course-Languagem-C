#include <stdio.h> // Inclue a biblioteca padr�o I/O.

int main(){
	// Declarando a vari�vel.
	int idade;

	// Fun��o que escreve na tela:
	printf("Qual � sua idade? \n");
	// Limpa o buffer de sa�da para garantir que a mensagem seja exibida imediatamente.
	fflush(stdout);

	// Fun��o que recebe entrada via teclado:
	scanf("%d", &idade);

	// Fun��o que escreve na tela exibindo valor da vari�vel:
	printf("Sua idade �: %d", idade);

	return 0;
}
