#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    //Definição dos atributos das cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4], cidade1[20], cidade2[20];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2, num_carta = 1;
    float area1, area2, pib1, pib2;

    // Cadastro das Cartas:
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Cadastro da primeira carta
    printf("Cadastrando Carta %d\n", num_carta);
    printf("Digite o caracter do Estado: ");
    scanf(" %c", &estado1);
    getchar(); //Limpando o buffer pra receber a próxima string.
    printf("Digite o código da Carta: ");
    fgets(codigo1, 4, stdin);
    printf("Digite o nome da Cidade: ");
    fgets(cidade1, 20, stdin);
    printf("Digite o número total de habitantes: ");
    scanf("%d", &populacao1);
    printf("Digite a área da Cidade em quilômetros quadrados: ");
    scanf("%f", &area1);
    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    num_carta++;

    //Cadastro da segunda carta
    printf("\n\nCadastrando Carta %d\n", num_carta);
    printf("Digite o caracter do Estado: ");
    scanf(" %c", &estado2);
    getchar(); //Limpando o buffer pra receber a próxima string.
    printf("Digite o código da Carta: ");
    fgets(codigo2, 4, stdin);
    printf("Digite o nome da Cidade: ");
    fgets(cidade2, 20, stdin);
    printf("Digite o número total de habitantes: ");
    scanf("%d", &populacao2);
    printf("Digite a área da Cidade em quilômetros quadrados: ");
    scanf("%f", &area2);
    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    //Bloco de código responsável por remover o \n no fim da string.
    codigo1[strcspn(codigo1,"\n")] = 0;
    codigo2[strcspn(codigo2,"\n")] = 0;
    cidade1[strcspn(cidade1,"\n")] = 0;
    cidade2[strcspn(cidade2,"\n")] = 0;

    //Exibição de cartas:
    num_carta = 1;

    // Exibição dos Dados das Cartas:
    // Exibe os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n\nCarta %d\n", num_carta);
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n\n\n", pontos_turisticos1);
    num_carta++;

    printf("\n\nCarta %d\n", num_carta);
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n\n\n", pontos_turisticos2);

    return 0;
}
