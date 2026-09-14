Usamos `std::cout` para imprimir a saída no console. O texto a ser impresso é colocado entre aspas duplas e seguido pelo operador de inserção `<<`. 

### Conceitos importantes sobre C++:

*   **Ponto e vírgula:** Toda instrução em C++ deve terminar com um ponto e vírgula `;`.
*   **Inclusão de biblioteca:** Antes de podermos usar `std::cout`, precisamos incluir a biblioteca `iostream` no início do nosso programa. Isso é feito com `#include <iostream>`.
*   **A biblioteca `iostream`:** Ela fornece as ferramentas necessárias para entrada e saída. Sem ela, o `std::cout` não estará disponível no código.
  
### Comentários em C++

*   **Comentário de linha única:** Usar `//`. Tudo depois de `//` até o final da linha é ignorado.
    ```cpp
    // Isto é um comentário de linha única
    std::cout << "Olá, Mundo!"; // Também pode ser usado ao lado do código
    ```

*   **Comentário de várias linhas:** Usar `/*` para iniciar e `*/` para terminar. É ideal para explicações mais longas.
    ```cpp
    /* Isto é um comentário de múltiplas linhas.
       Tudo o que estiver dentro deste bloco 
       será ignorado pelo compilador. */
    ```
## Sistema computacional (módulo 6)
Programa: Todo programa variável, memória primcipal (RAM) 

Quando trabalho com persistência: falamos com arquivos (json,csv,sgbd) MEM,secundária (HD,SSD,PENDRIVE)
QUANDO quero que uma variável represente um arquivo (criamos um ponteiro) só que tudo que eu fizer nela eu faço no arquivo (ler,escrever...) Não faço literalmente no arquivo, faço memória Ram que representa um arquivo. Chamado procurador de arquivo. 
Chamado : procurador-arquivo
file ou arquivo. 
File-> endereço físico (ponteiro)-> arquivo
Sistema Computacional



# Persistência de dados:
- Quando queremos que os dados continuem existindo mesmo depois que o programa termina, precisamos trabalhar com persistência.
  Quando estamos trabalhando apenas com o programa, os dados ficam na memória RAM.
Para isso, podemos usar arquivos ou bancos de dados, por exemplo: JSON, CSV, SGBD

Esses dados ficam armazenados na memória secundária, como:

HD
SSD
Pendrive
RAM x Memória secundária

A RAM é a memória principal, usada enquanto o programa está sendo executado.

A memória secundária é usada para armazenar os dados de forma persistente.

Arquivos

Quando queremos trabalhar com um arquivo dentro do programa, não manipulamos o arquivo físico diretamente.

Criamos uma variável que vai representar o arquivo na memória RAM.

Essa variável funciona como um tipo de ponteiro/procurador do arquivo.

Através dela podemos fazer operações como:

Ler o arquivo
Escrever no arquivo
Alterar o arquivo
Abrir o arquivo
Fechar o arquivo

Ou seja, as operações são feitas através dessa representação que está na memória.

Procurador de arquivo

Podemos chamar essa variável de:

procurador-arquivo

Em programação também podemos encontrar o termo:

file ou arquivo

A ideia é mais ou menos:

File
 ↓
Endereço físico (ponteiro)
 ↓
Arquivo


O File representa o arquivo dentro do programa e permite que o programa consiga acessar e manipular o arquivo que está armazenado na memória secundária.
