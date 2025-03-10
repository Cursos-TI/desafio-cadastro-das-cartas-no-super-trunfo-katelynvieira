#include <stdio.h>
//Declaração das variaveis usadas nas cartas 1 e 2.


int main(){
   char estado1;
   char codigo1[3];
   char cidade1[20];
   int populacao1;
   float area1;
   float pib1;
   int pontos1;


   char estado2;
   char codigo2[3];
   char cidade2[20];
   int populacao2;
   float area2;
   float pib2;
   int pontos2;


//utilização do printf para solicitar ao usuario de digite os valores desejados.
// utilização do scanf para que possa coletar os dados digitados manualmente pelo usuario


   printf("Digite o estado (A_H) da primeira carta:");
   scanf("%c", &estado1);
   printf("Digite o código da primeira carta:");
   scanf("%s", &codigo1);
   printf("Digite a cidade da primeira carta:");
   scanf("%s", &cidade1);
   printf("Digite a população da primeira carta:");
   scanf("%d", &populacao1);
   printf("Digite a área da primeira carta:");
   scanf("%f", &area1);
   printf("Digite o PIB da primeira carta:");
   scanf("%f", &pib1);
   printf("Digite a quantidade de pontos turisticos da primeira carta:");
   scanf("%dq", &pontos1);
// utilização de printf para exibir os dados da carta 1 digitados manualmente pelo usuario.
   printf("\nCarta 1:\n");
   printf ("Estado: %c\n", estado1);
   printf ("Código: %s\n", codigo1);
   printf ("Cidade: %s\n", cidade1);
   printf("População: %d\n", populacao1);
   printf ("Àrea: %f\n", area1);
   printf ("PIB: %f\n", pib1);
   printf ("Nº de pontos turisticos: %d\n", pontos1 );


   printf( "Digite o estado (A_H) da segunda carta: ");
   scanf("%c", &estado2);
   printf("Digite o código da segunda carta:");
   scanf("%s", &codigo2);
   printf("Digite a cidade da segunda carta:");
   scanf("%s", &cidade2);
   printf("Digite a população da segunda carta:");
   scanf("%d", &populacao2);
   printf("Digite a área da segunda carta:");
   scanf("%f", &area2);
   printf("Digite o PIB da segunda carta:");
   scanf("%f", &pib2);
   printf("Digite a quantidade de pontos turisticos da segunda carta:");
   scanf("%dq", &pontos2);


   // utilização de printf para exibir os dados da carta 2 digitados manualmente pelo usuario.


   printf("\nCarta 2:\n");
   printf ("Estado: %c\n", estado2);
   printf ("Código: %s\n", codigo2);
   printf ("Cidade: %s\n", cidade2);
   printf("População: %d\n", populacao2);
   printf ("Àrea: %f\n", area2);
   printf ("PIB: %f\n", pib2);
   printf ("Nº de pontos turisticos: %d\n", pontos2);
  
return 0 ;








}
