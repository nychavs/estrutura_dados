# revisao
conteudo
- alocação dinâmica
- ponteiros
- fila, pilha e lista com memoria dinamica
- vantagens e desvantagens das implementações das estruturas de dados


## memoria sequencial x memoria dinamica
|tipo| Vantagens | Desvantagens |
| -------------        | ------------- | -------------
| memoria sequencial   | mais fácil de programar<br> mais facil/rapido de obter o dado  | tamanho  maximo de elementos limitado <br> alocar memoria que nunca pode ser usada
| memoria dinamica     | nao ha limite para o numero de elementos <br> toda memoria usada guarda um dado solicitado  | gasta mais bytes de memória <br> cuidado ao alocar manualmente

## ponteiros

O que é um ponteiro
- Um ponteiro é uma variável que armazena o endereço de memória de outra variável. Ele permite o acesso indireto e manipulação dos dados na memória.

Declaração de ponteiros
- Os ponteiros devem ser declarados com um tipo de dado específico para indicar o tipo de dados que eles apontam. Por exemplo, int *ptr; declara um ponteiro para um inteiro.

Operador de endereço (&)
- O operador & é usado para obter o endereço de uma variável. Por exemplo, &x retorna o endereço da variável x.

Operador de desreferência (*)
- O operador * é usado para acessar o valor armazenado no endereço apontado por um ponteiro. Por exemplo, *ptr retorna o valor apontado por ptr.

Atribuição de ponteiros
- Um ponteiro pode ser atribuído com o endereço de outra variável do mesmo tipo. Por exemplo, ptr = &x; atribui o endereço de x ao ponteiro ptr.

## perguntas
O que é um ponteiro em C e para que serve?
> Um ponteiro em C é uma variável que armazena o endereço de memória de outra variável. Ele permite o acesso indireto e manipulação dos dados na memória, facilitando o trabalho com estruturas de dados complexas, alocação dinâmica de memória e passagem eficiente de parâmetros para funções.

Como declarar um ponteiro em C?
> Um ponteiro em C é declarado especificando o tipo de dado ao qual ele aponta, seguido de um asterisco (*). Por exemplo, para declarar um ponteiro para um inteiro, usamos a sintaxe: int *ptr;.

Qual é a diferença entre um ponteiro e uma variável normal em C?
>Uma variável normal em C armazena um valor diretamente, enquanto um ponteiro armazena o endereço de memória de outra variável. O ponteiro permite manipular o valor da variável indiretamente, por meio do acesso à memória.

Como obter o endereço de uma variável em C?
> O endereço de uma variável pode ser obtido usando o operador de endereço (&). Por exemplo, se temos uma variável x, podemos obter seu endereço usando &x.

O que significa desreferenciar um ponteiro em C?
> Desreferenciar um ponteiro em C significa acessar o valor armazenado no endereço de memória apontado pelo ponteiro. Isso é feito usando o operador de desreferência (*). Por exemplo, se temos um ponteiro ptr, podemos acessar o valor apontado por ele usando *ptr.

Como atribuir um valor a um ponteiro em C?
> Um valor pode ser atribuído a um ponteiro em C usando o operador de atribuição (=). Por exemplo, para atribuir o endereço de uma variável x a um ponteiro ptr, usamos ptr = &x;

O que é alocação dinâmica de memória em C?
> A alocação dinâmica de memória em C é o processo de solicitar memória durante a execução do programa, em vez de alocá-la em tempo de compilação. Ela permite criar estruturas de dados com tamanho variável e realizar ajustes na quantidade de memória necessária em tempo de execução.

Quais são as funções utilizadas para alocar memória dinamicamente em C?
> malloc: aloca um bloco de memória especificado pelo tamanho em bytes.
> calloc: aloca e inicializa um bloco de memória para um número especificado de elementos de um determinado tamanho.
> realloc: realoca um bloco de memória existente, permitindo aumentar ou diminuir seu tamanho.

Como liberar memória alocada dinamicamente em C?
> A memória alocada dinamicamente deve ser liberada usando a função free. Ela desaloca o bloco de memória previamente alocado, tornando-o disponível para reutilização.

O que é fragmentação de memória e como ela pode ocorrer ao usar alocação dinâmica?
> A fragmentação de memória ocorre quando há uma distribuição ineficiente dos blocos de memória alocados e desalocados ao longo do tempo. Isso pode levar a dois tipos de fragmentação: fragmentação externa, onde há espaços vazios espalhados no heap, e fragmentação interna, onde há espaços não utilizados dentro de blocos alocados.

Como utilizar um ponteiro para percorrer um array em C?
> Um ponteiro pode ser utilizado para percorrer um array em C usando aritmética de ponteiros. Inicialmente, o ponteiro é apontado para o primeiro elemento do array. Em seguida, podemos percorrer os elementos do array usando operações de incremento ou decremento do ponteiro.

Quais são os possíveis problemas que podem ocorrer ao utilizar ponteiros e memória dinâmica em C?
> Alguns problemas comuns que podem ocorrer ao utilizar ponteiros e memória dinâmica em C incluem vazamentos de memória, referências inválidas ou não inicializadas, acesso incorreto à memória e corrupção de memória. Esses problemas podem resultar em comportamentos inesperados ou erros no programa.

Quais são as vantagens e desvantagens da memória dinâmica em relação à memória estática em C?
> Vantagens da memória dinâmica incluem a capacidade de alocar memória conforme necessário, flexibilidade para lidar com estruturas de dados de tamanho variável e a possibilidade de reutilização eficiente da memória. No entanto, a memória dinâmica também requer um gerenciamento cuidadoso, pode resultar em vazamentos de memória se não for liberada adequadamente e pode introduzir complexidade adicional no código em comparação com a memória estática.
