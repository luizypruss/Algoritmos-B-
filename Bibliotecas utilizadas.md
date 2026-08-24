### Bibliotecas (#include <...>)
*#include <limits>:* Traz ferramentas para descobrir os limites máximos e mínimos de tipos numéricos (como o maior número que um int ou float aguenta).
*#include <iostream>:* Permite usar o cout (para mostrar textos na tela) e o cin (para ler o que o usuário digita). Como diz o comentário, ele faz o papel do stdio.h do C puro.
*#include <string>:* Ativa o tipo string (texto) no C++. É graças a essa linha que você pode usar palavras completas na sua estrutura sem dar erro.
*#include <vector>:* Permite criar vetores (listas de dados) dinâmicos e modernos, que podem crescer ou diminuir de tamanho facilmente.
*(using namespace std;):* Evita que você precise escrever std:: antes de cada comando do C++. Sem essa linha, você seria obrigado a digitar std::cout e std::string toda vez.
(#include "meusTipos.h"): Copia a estrutura IndiceMassaCorporal que você salvou no outro arquivo para dentro deste programa principal. Note que ele usa aspas "" em vez de <> porque é um arquivo criado por você (na mesma pasta) e não uma biblioteca nativa do sistema.
