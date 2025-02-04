#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nomeCidade[30];        // declaro a variavel para nome da cidade
    int populacao, pontosTuristicos;    //declaro variaveis do tipo inteiro
    float area, pib;    //declaro variaveis do tipo float

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite nome da Cidade:\n"); // interajo com o cliente
    scanf("%s", &nomeCidade);   // leio para vairavel nome
    printf("Digite quantidade da população:\n");
    scanf("%d", &populacao);
    printf("Numeros de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos);
    printf("Digite a expansão em area do território da cidade:\n"); 
    scanf("%f", &area);
    printf("Qual o PIB da cidade:\n");
    scanf("%f", &pib);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Cidade: %s\n", nomeCidade); //apresento valores atribuidos pelos clientes
    printf("Número populacinal: %d\n", populacao);
    printf("Números de pontos turísticos: %d\n", pontosTuristicos);
    printf("Aréa: %f Km\n", area);
    printf("PIB da cidade: %f", pib);


    return 0;
}
