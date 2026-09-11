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
