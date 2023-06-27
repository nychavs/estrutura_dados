#include <stdio.h>
#include <stdlib.h>

void push(int numero);
int pop();
void imprimir();
int verificarVazia();
void inicializar();

typedef struct no {
	int dado;
	struct no *anterior;
} No;

typedef struct pilha {
	No *topo;
} Pilha;

Pilha p;

void inicializar() {
	p.topo = NULL;
}

int verificarVazia() {
	if (p.topo == NULL)
		return 1;
	else
		return 0;
}

void push(int numero) {
	// Verificar se a pilha está vazia ou se o número é menor que o elemento do topo
	if (verificarVazia() || numero < p.topo->dado) {
		// Alocar memória para um novo nó da pilha
		No *novoNoh = (No *)malloc(sizeof(No));
		// Se foi alocada memória, adicionar o novoNo no topo da pilha
		if (novoNoh != NULL) {
			// Guardar o elemento a inserir na pilha no membro dado do novoNo
			novoNoh->dado = numero;
			// O próximo elemento do novoNo será o elemento que está no topo
			novoNoh->anterior = p.topo;
			// Atualizar o topo da pilha
			p.topo = novoNoh;
		}
		else {
			// Senão, informar o usuário que não há mais memória
			printf("\nA pilha está cheia pois não há mais memória disponível");
			return;
		}
	}
	else {
		// Se o número não for menor que o elemento do topo, não empilhar
		printf("\nO número não é menor que o elemento do topo da pilha.");
	}
}

int pop() {
	// Verificar se a pilha não está vazia
	if (!verificarVazia()) {
		// Criar variável que vai apontar para o nó a ser removido
		No *aux;
		// Criar variável para guardar o dado do nó a ser removido
		int dado;
		// Aux aponta para o nó do topo
		aux = p.topo;
		// Dado irá guardar o elemento do topo da pilha
		dado = p.topo->dado;
		// Atualizar o topo da pilha
		p.topo = aux->anterior;
		// Liberar a memória ocupada pelo nó removido
		free(aux);
		// Retornar o valor do nó removido
		return dado;
	}
	else {
		// Se a pilha estiver vazia, informar o usuário
		printf("\nA pilha está vazia.");
		return 0;
	}
}

void imprimir() {
	// Verificar se a pilha não está vazia
	if (!verificarVazia()) {
		// Declara uma variável ponteiro auxiliar para percorrer os nós da pilha
		No *aux;
		// Começar a percorrer a partir do topo
		aux = p.topo;
		// Enquanto não chegar no fim
		while (aux != NULL) {
			// Imprimir o
