#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Definindo os atributos de uma cidade
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    // Solicitação de dados ao usuário
    printf("Bem-vindo ao cadastro de cartas de cidades!\n");
    printf("Por favor, insira as informações da cidade:\n");

    printf("Código da cidade: ");
    scanf("%d", &codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nome); // Captura strings com espaços

    printf("População da cidade: ");
    scanf("%d", &populacao);

    printf("Área da cidade (em km²): ");
    scanf("%f", &area);

    printf("PIB da cidade (em bilhões): ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Exibindo os dados cadastrados
    printf("\n--- Dados da Cidade Cadastrada ---\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}
