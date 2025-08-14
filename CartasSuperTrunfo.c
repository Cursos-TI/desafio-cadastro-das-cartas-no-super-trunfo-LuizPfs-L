#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio Cartas Super Trunfo!\n");
    printf("Novo commit\n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1[2],estado2[2];
    char codigo1[4],codigo2[4];
    char nome_cidade1[50],nome_cidade2[50];
    int populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int pontos_turisticos1,pontos_turisticos2;
    // Cadastro das Cartas:
    //Primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (A-H):");
    scanf("%s", &estado1);
    printf("Código da carta:\n");
    scanf("%s", &codigo1);
    printf("Nome da cidade:\n");
    scanf("%s", &nome_cidade1);
    printf("População:\n");
    scanf("%d", &populacao1);
    printf("Área em KM²:\n");
    scanf("%f", &area1);
    printf("PIB (Bilhões de reais)\n");
    scanf("%f", &pib1);
    printf("");
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
