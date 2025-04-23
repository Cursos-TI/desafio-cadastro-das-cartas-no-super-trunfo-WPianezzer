#include <stdio.h>

// Definição da estrutura para armazenar os dados de uma carta
struct Carta {
    char estado;                    
    char codigo[4];                
    char nomeCidade[50];          
    int populacao;                
    float area;                   
    float pib;                    
    int pontosTuristicos;        
};

// Função auxiliar para limpar o buffer de entrada
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    struct Carta carta1;
    struct Carta carta2;

    // Instruções para o usuário
    printf("Cadastro da Carta 1:\n");

    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &carta1.estado);
    limparBuffer();

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    limparBuffer();

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);
    limparBuffer();

    printf("Informe a População: ");
    scanf("%d", &carta1.populacao);
    limparBuffer();

    printf("Informe a Área em km²: ");
    scanf("%f", &carta1.area);
    limparBuffer();

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);
    limparBuffer();

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    limparBuffer();

    printf("\nCadastro da Carta 2:\n");

    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &carta2.estado);
    limparBuffer();

    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%s", carta2.codigo);
    limparBuffer();

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);
    limparBuffer();

    printf("Informe a População: ");
    scanf("%d", &carta2.populacao);
    limparBuffer();

    printf("Informe a Área em km²: ");
    scanf("%f", &carta2.area);
    limparBuffer();

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);
    limparBuffer();

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);
    limparBuffer();

    // Exibição dos dados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}