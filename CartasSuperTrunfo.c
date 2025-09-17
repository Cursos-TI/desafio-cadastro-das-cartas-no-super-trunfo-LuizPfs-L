#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio Cartas Super Trunfo!\n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1[2],estado2[2];
    char codigo1[4],codigo2[4];
    char nome_cidade1[49],nome_cidade2[49];
    unsigned long int populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int pontos_turisticos1,pontos_turisticos2;
    float densidade_populacional1,densidade_populacional2;
    float PIB_per_capita1, PIB_per_capita2;
    float SuperPoder1, SuperPoder2;
    
    // Cadastro das Cartas:
    //Primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (A-H):");
    scanf("%s", estado1);
    printf("Código da carta:\n");
    scanf("%s", codigo1);
    printf("Nome da cidade (digite sem espaços, use _ ou - para separar as palavras):\n");
    printf("Exemplo: Rio_de_Janeiro ou Belo-Horizonte\n");
    scanf("%s", nome_cidade1);
    printf("População:\n");
    scanf("%lu", &populacao1);
    printf("Área em KM²:\n");
    scanf("%f", &area1);
    printf("PIB (bilhões de reais)\n");
    scanf("%f", &pib1);
    printf("Números de pontos turísticos\n");
    scanf("%d", &pontos_turisticos1);
   
    
    //Segunda carta
    printf("Digite os dados da segunda carta:\n");
    printf("Estado (A-H):");
    scanf("%s", estado2);
    printf("Código da carta:\n");
    scanf("%s", codigo2);
    printf("Nome da cidade (digite sem espaços, use _ ou - para separar as palavras):\n");
    printf("Exemplo: Rio_de_Janeiro ou Belo-Horizonte\n");
    scanf("%s", nome_cidade2);
    printf("População:\n");
    scanf("%lu", &populacao2);
    printf("Área em KM²:\n");
    scanf("%f", &area2);
    printf("PIB (bilhões de reais)\n");
    scanf("%f", &pib2);
    printf("Números de pontos turísticos\n");
    scanf("%d", &pontos_turisticos2);
    

    //Desafio Nivel Aventureiro-Cálculos
    densidade_populacional1 = (float) populacao1 / area1;
    PIB_per_capita1 = pib1 / (float) populacao1;

    densidade_populacional2 = (float) populacao2 / area2;
    PIB_per_capita2 = pib2 / (float) populacao2;

    // Super Poder
    SuperPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + PIB_per_capita1 + (1.0f / densidade_populacional1);
    SuperPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + PIB_per_capita2+ (1.0f / densidade_populacional2);

   
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
   
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade_populacional1);
    printf("PIB per Capita: %.6f\n", PIB_per_capita1);
    printf("Super Poder: %.6f\n", SuperPoder1);

    
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional2);
    printf("PIB per Capita: %.6f\n", PIB_per_capita2);
    printf("Super Poder: %.6f\n", SuperPoder2);

    //Desafio Nivel Mestre:Comparação
    printf("\nComparação dos atributos (1 = Carta 1 vence, 0 = Carta 2 vence):\n");
    printf("População: %d\n", populacao1 > populacao2 ? 1 : 0);
    printf("Área: %d\n", area1 > area2 ? 1 : 0);
    printf("PIB: %d\n", pib1 > pib2 ? 1 : 0);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1 > pontos_turisticos2 ? 1 : 0);
    printf("Densidade Populacional: %d\n", densidade_populacional1 < densidade_populacional2 ? 1 : 0); //Menor vence
    printf("PIB per Capita: %d\n", PIB_per_capita1 > PIB_per_capita2 ? 1 : 0);
    printf("Super Poder: %d\n", SuperPoder1 > SuperPoder2 ? 1 : 0);

    
    
    

    printf("!DESAFIO NIVEL NOVATO CONCLUIDO!\n");
    printf("!DESAFIO NIVEL AVENTUREIRO CONCLUIDO!\n");
    printf("!DESAFIO NIVEL MESTRE CONCLUIDO!\n");
    printf("!TODOS OS DESAFIOS CONCLUIDOS!\n");

    return 0;
}