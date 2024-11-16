#include <stdio.h>
#include <string.h>
#include <ctype.h>


    #define MAX_CARTAS 32   // Número maximo de cartas

    /* 
    As cartas devem ser represenrtadas por um codigo de 3 digitos, o primeiro sendo ua letra que representa o estado
    e um numero de 2 digitos 01 a 04 que vão representar a cidade. Cada carta terá inicialmente 4 estatísticas, sendo elas:
    > População em milhões
    > Aréa em Km²
    > PIB em Bilhões de reais
    > Número de Pontos turísticos
    */

    // Criando um estrutura para as cartas
    typedef struct {
        char estado;           // Letra do estado
        int codigo;            // Numero
        char cidade[50];       // Nome 
        int pop;               // Populacão em milhões de habitantes
        float area;            // Área em Km²
        float pib;             // PIB em milhões de reais
        int turi;              // Número de pontos turísticos 
    } Carta;


    int main() {
        Carta cartas[MAX_CARTAS]; // Vetor de cartas
        int i = 0;                // Contador para estrutura de repetição

        
        printf("============================================================================\n");
        printf("                           SUPER TRUNFO PAÍSES\n");
        printf("============================================================================\n");

                // Explicação do jogo para o usuário
        printf("Bem vindo ao Super Trunfo Países. Antes de iniciarmos gostaria que preenchesse os dados das cartas que serão usadas no jogo.\n");
        printf("Você deverá preencher 7 campos contendo os dados das cartas, sendo eles: \n");
        printf("     -> Uma letra de A a H que irá representar o estado.\n");
        printf("     -> Um número de 1 a 4 que irá representar um das cidades do estado selecionado.\n");
        printf("     -> O nome da cidade que será exibido na carta.\n");
        printf("     -> A população da cidade que será lida em milhões de habitantes.\n");
        printf("     -> A área em Km².\n");
        printf("     -> O PIB da cidade em milhões de reais.\n");
        printf("     -> A quantidade de pontos turísticos da cidade.\n");
        printf("Esses são os dados que você deverá preencher, agora que as explicações foram dadas hora de informar quais cidades você que no jogo e os seus dados.");

            // Coletando dado para cada carta
            for (i = 0; i < MAX_CARTAS; i++) {    // Estrutura de repetição para coleta de dados | i = variavel para contador iniciando em 0 | enquanto i < maximo de cartas a estrutura vai se repetir adicionando 1 a i (i++)

                printf("========================================================================\n");
                printf("                     SUPER TRUNFO PAISES - CARTA %d\n", i + 1);
                printf("========================================================================\n");

                printf("\nDigite uma letra que irá representar o %d estado (A até H): \n", i);
                getchar(); //limpar o buffer antes de ler a letra
                scanf("%c", &cartas[i].estado);
                    // Garantir que a letra do estado seja maiúscula
                    cartas[i].estado = toupper(cartas[i].estado);

                printf("Digite um número de 01 a 04 que irá representar a cidade: \n");
                scanf("%d", &cartas[i].codigo);
                getchar(); // Limpar o buffer

                printf("Digite o nome da cidade: \n");
                scanf("%[^\n]", &cartas[i].cidade);         // %[^\n] no lugar de %s para ler o nome da cidade com espaço

                printf("Digite a população da cidade(mihões de habitantes): \n");
                scanf("%d", &cartas[i].pop);
                getchar(); // Limpar o buffer   

                printf("Digite a área da cidade(Km²): \n");
                scanf("%f", &cartas[i].area);
                getchar(); // Limpar o buffer

                printf("Digite o PIB(milhões de reais): $\n");
                scanf("%f", &cartas[i].pib);
                getchar(); // Limpar o buffer

                printf("Digite a quantidade de pontos turísticos da cidade: \n");
                scanf("%d", &cartas[i].turi);
                getchar(); // Limpar o buffer
            }

                     
                           // Mostrando as cartas registradas
        printf("\n============================================================================\n");
        printf("                           CARTAS COLETADAS\n");
        printf("============================================================================\n");

        for (i = 0; i < MAX_CARTAS; i++) {                  // Estrutura de repetição para mostrar as cartas de 1 a 32

            printf("\n--------------------------------------------------------------\n");
            printf("| %do Carta: %c%d.\n", i + 1, cartas[i].estado, cartas[i].codigo);
            printf("| Cidade:               %s\n", cartas[i].cidade);
            printf("| Popuação (Milhões):   %d\n", cartas[i].pop);
            printf("| Área (Km²):           %.2f\n", cartas[i].area);
            printf("| PIB (Milhões RS$):    $%.1f\n", cartas[i].pib);
            printf("| Pontos turísticos:    %d\n", cartas[i].turi);
            printf("--------------------------------------------------------------\n");

        }

        return 0;
        
    }
    