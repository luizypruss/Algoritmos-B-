
Dado os programas criados em laboratório, com uso de menu e vetor, crie as seguintes melhorias:

a) crie uma opção no menu que calcule e exiba a média aritmética dos valores do vetor

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // pra usar o negocio de numeros aleatorios

int main() {
    int opcao;
    int vetor[10]; // coloquei tamanho 10 porque o meu tava dando erro sem tamanho!
    int i;
    int soma;
    float media;

    // o tio do YouTube disse que precisa disso pro rand() nao repetir os mesmos numeros kkkk
    srand(time(NULL));

    do {
        system("cls"); // limpa a tela
        printf("MENU PRINCIPAL\n");
        printf("1 - Popular vetor com numeros aleatorios\n");
        printf("2 - Listar vetor populado\n");
        printf("3 - Calcular a media do vetor\n"); // essa e a minha opcao nova!!
        printf("4 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nPopulando o vetor com numeros aleatorios...\n");
                for(i = 0; i < 10; i++) {
                    vetor[i] = rand() % 100; // gera de 0 a 99
                }
                printf("Prontinho! Vetor cheio.\n");
                break;

            case 2:
                printf("\nListando os numeros do vetor:\n");
                for(i = 0; i < 10; i++) {
                    printf("Posicao %d: %d\n", i, vetor[i]);
                }
                break;

            case 3:
                printf("\nCalculando a media...\n");
                soma = 0; // zera a soma pra nao vir com lixo de memoria!
                
                for(i = 0; i < 10; i++) {
                    soma = soma + vetor[i]; // vai somando tudo
                }
                
                // coloquei (float) pra dar numero com virgula certinho
                media = (float)soma / 10; 
                
                printf("A soma de tudo deu: %d\n", soma);
                printf("A media dos valores e: %.2f\n", media);
                break;

            case 4:
                printf("\nSaindo do programa... Tchau!\n");
                break;

            default:
                printf("\nOpcao invalida! Digita de novo.\n");
                break;
        }

        printf("\n");
        system("pause");

    } while (opcao != 4);

    return 0;
}
### b) crie uma opção no menu que calcule e exiba a mediana dos valores do vetor

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao;
    int vetor[10];
    int i, j, aux; // 'aux' e 'j' vão ajudar a ordenar o vetor!
    int soma;
    float media, mediana;

    srand(time(NULL));

    do {
        system("cls");
        printf("MENU PRINCIPAL\n");
        printf("1 - Popular vetor com numeros aleatorios\n");
        printf("2 - Listar vetor populado\n");
        printf("3 - Calcular a media do vetor\n");
        printf("4 - Calcular a mediana do vetor\n"); // Opção nova aqui!
        printf("5 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nPopulando o vetor...\n");
                for(i = 0; i < 10; i++) {
                    vetor[i] = rand() % 100;
                }
                printf("Vetor preenchido!\n");
                break;

            case 2:
                printf("\nListando o vetor:\n");
                for(i = 0; i < 10; i++) {
                    printf("Posicao %d: %d\n", i, vetor[i]);
                }
                break;

            case 3:
                printf("\nCalculando a media...\n");
                soma = 0;
                for(i = 0; i < 10; i++) {
                    soma += vetor[i];
                }
                media = (float)soma / 10;
                printf("A media e: %.2f\n", media);
                break;

            case 4:
                printf("\nCalculando a mediana...\n");

                // PASSO 1: Ordenar o vetor (do menor para o maior)
                // Se nao ordenar, a mediana da errado!!
                for(i = 0; i < 10 - 1; i++) {
                    for(j = i + 1; j < 10; j++) {
                        if(vetor[i] > vetor[j]) {
                            // Troca os valores de lugar usando uma variavel auxiliar
                            aux = vetor[i];
                            vetor[i] = vetor[j];
                            vetor[j] = aux;
                        }
                    }
                }

                printf("Vetor ordenado para o calculo: ");
                for(i = 0; i < 10; i++) {
                    printf("%d ", vetor[i]);
                }
                printf("\n");

               // PASSO 2: Como o tamanho e 10 (par), pegamos os dois valores do meio 
                // As posicoes do meio em um vetor de 10 sao 4 e 5 (lembrando que comeca no 0)
                mediana = (float)(vetor[4] + vetor[5]) / 2;

                printf("Os elementos do meio sao %d e %d\n", vetor[4], vetor[5]);
                printf("A mediana e: %.2f\n", mediana);
                break;

            case 5:
                printf("\nSaindo... Tchau!\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
                break;
        }

        printf("\n");
        system("pause");

    } while (opcao != 5);

    return 0;
}

### c) crie uma opção do menu que localize e exiba o MENOR valor e o MAIOR valor do vetor

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao;
    int vetor[10];
    int i, j, aux;
    int soma;
    float media, mediana;
    int menor, maior; // Variáveis novas para guardar o menor e o maior!

    srand(time(NULL));

    do {
        system("cls");
        printf("MENU PRINCIPAL\n");
        printf("1 - Popular vetor com numeros aleatorios\n");
        printf("2 - Listar vetor populado\n");
        printf("3 - Calcular a media do vetor\n");
        printf("4 - Calcular a mediana do vetor\n");
        printf("5 - Achar o MENOR e o MAIOR valor\n"); // Opcao nova aqui!!
        printf("6 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nPopulando o vetor...\n");
                for(i = 0; i < 10; i++) {
                    vetor[i] = rand() % 100;
                }
                printf("Vetor preenchido!\n");
                break;

            case 2:
                printf("\nListando o vetor:\n");
                for(i = 0; i < 10; i++) {
                    printf("Posicao %d: %d\n", i, vetor[i]);
                }
                break;

            case 3:
                printf("\nCalculando a media...\n");
                soma = 0;
                for(i = 0; i < 10; i++) {
                    soma += vetor[i];
                }
                media = (float)soma / 10;
                printf("A media e: %.2f\n", media);
                break;

            case 4:
                printf("\nCalculando a mediana...\n");
                // Ordena o vetor
                for(i = 0; i < 10 - 1; i++) {
                    for(j = i + 1; j < 10; j++) {
                        if(vetor[i] > vetor[j]) {
                            aux = vetor[i];
                            vetor[i] = vetor[j];
                            vetor[j] = aux;
                        }
                    }
                }

                mediana = (float)(vetor[4] + vetor[5]) / 2;
                printf("A mediana e: %.2f\n", mediana);
                break;

            case 5:
                printf("\nLocalizando o menor e o maior valor...\n");

                // Começamos fingindo que o primeiro numero (posicao 0) e o menor e o maior ao mesmo tempo
                menor = vetor[0];
                maior = vetor[0];

                // Comparamos com o resto dos numeros do vetor
                for(i = 1; i < 10; i++) {
                    if(vetor[i] < menor) {
                        menor = vetor[i]; // Achou um numero menor ainda!
                    }
                    if(vetor[i] > maior) {
                        maior = vetor[i]; // Achou um numero maior ainda!
                    }
                }

                printf("O MENOR valor encontrado foi: %d\n", menor);
                printf("O MAIOR valor encontrado foi: %d\n", maior);
                break;

            case 6:
                printf("\nSaindo... Tchau!\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
                break;
        }

        printf("\n");
        system("pause");

    } while (opcao != 6);

    return 0;
}
