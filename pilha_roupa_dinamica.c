#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MODELO 50
#define MAX_COR 15

typedef struct roupa{
	char modelo[MAX_MODELO];
	char cor[MAX_COR];
	char tamanho;
} Roupa;

typedef struct no {
	Roupa roupa;
	struct no* anterior;
} No;

typedef struct pilha {
	No* topo;
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

void push(Roupa roupa) {
	// Alocar memória para um novo nó da pilha
	No* novoNoh = (No*)malloc(sizeof(No));
	// Se foi alocada memória, adicionar o novoNo no topo da pilha
	if (novoNoh != NULL) {
		// Copiar os dados da roupa para o membro roupa do novoNo
		strcpy(novoNoh->roupa.modelo, roupa.modelo);
		strcpy(novoNoh->roupa.cor, roupa.cor);
		novoNoh->roupa.tamanho = roupa.tamanho;
		// O próximo elemento do novoNo será o elemento que está no topo
		novoNoh->anterior = p.topo;
		// Atualizar o topo da pilha
		p.topo = novoNoh;
	}
	else {
		// Senão, informar o usuário que não há mais memória
		printf("\nA pilha está cheia pois não há mais memória disponível");
	}
}

Roupa pop() {
	Roupa roupaVazia = { "", "", '\0' };
	// Verificar se a pilha não está vazia
	if (!verificarVazia()) {
		// Criar variável que vai apontar para o nó a ser removido
		No* aux;
		// Criar variável para guardar a roupa do nó a ser removido
		Roupa roupaRemovida;
		// Aux aponta para o nó do topo
		aux = p.topo;
		// RoupaRemovida irá guardar a roupa do topo da pilha
		roupaRemovida = aux->roupa;
		// Atualizar o topo da pilha
		p.topo = aux->anterior;
		// Liberar a memória ocupada pelo nó removido
		free(aux);
		// Retornar a roupa removida
		return roupaRemovida;
	}
	else {
		// Se a pilha estiver vazia, informar o usuário
		printf("\nA pilha está vazia.");
		return roupaVazia;
	}
}

void imprimir() {
	// Verificar se a pilha não está vazia
	if (!verificarVazia()) {
		// Declara uma variável ponteiro auxiliar para percorrer os nós da pilha
		No* aux;
		// Começar a percorrer a partir do topo
		aux = p.topo;
		// Enquanto não chegar no fim
		while (aux != NULL) {
			// Imprimir os dados da roupa apontada por aux
			printf("Modelo: %s\n", aux->
