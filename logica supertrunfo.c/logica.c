#include <stdio.h>

// Estrutura para representar uma carta do jogo
struct Carta {
    char estado[3];            
    char codigo[10];           
    char cidade[50];           
    int populacao;            
    float area;                
    float pib;                 
    int pontosTuristicos;     
    float densidade;        
    float pibPerCapita;    
};

int main() {
    // Criando duas cartas manualmente (pré-definidas)
    struct Carta carta1 = {"SP", "C001", "São Paulo", 12300000, 1521.11, 2300000.0, 15};
    struct Carta carta2 = {"RJ", "C002", "Rio de Janeiro", 6700000, 1182.3, 850000.0, 10};

    // Calculando densidade populacional (população / área)
    carta1.densidade = carta1.populacao / carta1.area;
    carta2.densidade = carta2.populacao / carta2.area;

    // Calculando PIB per capita (PIB / população)
    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Comparando as cartas usando o atributo POPULAÇÃO
    printf("Comparação de cartas (Atributo: População):\n\n");

    printf("Carta 1 - %s (%s): %d habitantes\n", carta1.cidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d habitantes\n\n", carta2.cidade, carta2.estado, carta2.populacao);

    // Verifica qual cidade tem mais população
    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
