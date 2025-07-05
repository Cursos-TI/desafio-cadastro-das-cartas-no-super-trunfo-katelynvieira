#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados de uma carta
struct Carta {
    char estado[3];
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

// Função para calcular a densidade populacional e PIB per capita
void calcularIndicadores(struct Carta *carta) {
    if (carta->area != 0) {
        carta->densidadePopulacional = carta->populacao / carta->area;
    } else {
        carta->densidadePopulacional = 0;
    }

    if (carta->populacao != 0) {
        carta->pibPerCapita = carta->pib / carta->populacao;
    } else {
        carta->pibPerCapita = 0;
    }
}

// Função para exibir os dados de uma carta
void exibirCarta(struct Carta carta) {
    printf("\nEstado: %s\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidadePopulacional);
    printf("PIB per capita: %.2f mil reais\n", carta.pibPerCapita);
}

int main() {
    // Cadastro das duas cartas
    struct Carta carta1 = {"SP", "C001", "São Paulo", 12300000, 1521.11, 799.28, 30};
    struct Carta carta2 = {"RJ", "C002", "Rio de Janeiro", 6700000, 1200.28, 365.10, 25};

    // Cálculo de densidade e PIB per capita
    calcularIndicadores(&carta1);
    calcularIndicadores(&carta2);

    // Exibição das cartas
    printf("== Carta 1 ==\n");
    exibirCarta(carta1);
    printf("\n== Carta 2 ==\n");
    exibirCarta(carta2);

    // Atributo para comparação (fixo neste exemplo): População
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("\nCarta 1 - %s (%s): %d", carta1.nomeCidade, carta1.estado, carta1.populacao);
    printf("\nCarta 2 - %s (%s): %d\n", carta2.nomeCidade, carta2.estado, carta2.populacao);

    // Comparação usando if-else
    if (carta1.populacao > carta2.populacao) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}








}
