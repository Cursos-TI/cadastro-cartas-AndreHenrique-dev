#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main() {
  char estado1, estado2;
  char codigo1[5], codigo2[5];
  char cidade1[50], cidade2[50];
  unsigned long int populacao1, populacao2;
  int turismo1, turismo2;
  float area1, area2;
  double pib1, pib2;
  float PibPerCapita1, PibPerCapita2;
  float DensPop1, DensPop2;
  float PoderCarta1, PoderCarta2;

  /* Coleta de dados carta 1 */
  printf("-----------CARTA 1----------\n"); 

  printf("\nDigite uma letra de A-H para representar o estado: ");
  scanf("%c",&estado1);

  printf("Digite o código(1 letra, 2 números; ex: A01): ");
  scanf(" %s",&codigo1);

  printf("Digite o nome da cidade(sem espaçamento): ");
  scanf(" %s",&cidade1);

  printf("Digite a população da cidade: ");
  scanf(" %d", &populacao1);

  printf("Digite a área da cidade (km²): ");
  scanf(" %f", &area1);

  printf("Digite o PIB: ");
  scanf(" %lf", &pib1);

  printf("Digite o número de pontos túristicos: ");
  scanf(" %d", &turismo1);

  printf("\nCarta 1 registrado com sucesso!\n");
  /* Fim coleta de dados carta 1 */

  //Calculo de Densidade Populacional e PibPerCapita da Carta 1.
  DensPop1 = (float) populacao1 / area1;
  PibPerCapita1 = (float) pib1 / populacao1;

  /* Coleta de dados CARTA 2 */
  printf("\n-----------CARTA 2----------\n"); 

  printf("\nDigite uma letra de A-H para representar o estado: ");
  scanf(" %c",&estado2); //espaço antes do % para limpar o buffer.

  printf("Digite o código(1 letra, 2 números; ex: A01): ");
  scanf(" %s",&codigo2);

  printf("Digite o nome da cidade: ");
  scanf(" %s",&cidade2);

  printf("Digite a população da cidade: ");
  scanf(" %d", &populacao2);

  printf("Digite a área da cidade (km²): ");
  scanf(" %f", &area2);

  printf("Digite o PIB: ");
  scanf(" %lf", &pib2);

  printf("Digite o número de pontos túristicos: ");
  scanf(" %d", &turismo2);

  printf("\nCarta 2 registrado com sucesso!\n");
  /* Fim coleta de dados carta 2 */

  //Calculo de Densidade Populacional e PibPerCapita da Carta 1.
  DensPop2 = (float) populacao2 / area2;
  PibPerCapita2 = (float) pib2 / populacao2;

  //Calculo de Super poderes Carta 1.
  PoderCarta1 = (float) populacao1 + area1 + pib1 + turismo1 + PibPerCapita1 - DensPop1;

  //Calculo de Super poderes Carta 2.
  PoderCarta2 = (float) populacao2 + area2 + pib2 + turismo2 + PibPerCapita2 - DensPop2;

  /* Exibição de cartas */

  /* Exibir Carta 1 */
  printf("\nCARTA 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n",codigo1);
  printf("Cidade: %s\n",cidade1);
  printf("População: %d\n",populacao1);
  printf("Área: %.2fkm²\n",area1);
  printf("PIB: %.2f reais\n",pib1);
  printf("Pontos túristicos: %d\n",turismo1);
  printf("Densidade Popular: %.4f hab/km²\n",DensPop1);
  printf("PIB Per Capta: %.2f reais\n", PibPerCapita1);
  printf("Super Poder: %.4f\n", PoderCarta1);

  /* Exibir Carta 2 */
  printf("\nCARTA 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n",codigo2);
  printf("Cidade: %s\n",cidade2);
  printf("População: %d\n",populacao2);
  printf("Área: %.2fkm²\n",area2);
  printf("PIB: %.2f reais\n",pib2);
  printf("Pontos túristicos: %d\n",turismo2);
  printf("Densidade Popular: %.4f hab/km²\n",DensPop2);
  printf("PIB Per Capta: %.2f reais\n", PibPerCapita2);
  printf("Super Poder: %.4f\n", PoderCarta2);
  
  //Comparando as cartas

  printf("\nComparando cartas...\n\n-------CARTA 1 VS CARTA 2-------\n");
  printf("Atributo: Densidade Populacional\n");
  printf("Carta 1: %.7f\n",DensPop1);
  printf("Carta 2: %.7f\n",DensPop2);
  
  //Comparando atributos em casa de vitoria/derrota.
  if(DensPop1<DensPop2){
    printf("Carta 1 venceu!");
  }else{
    printf("Carta 2 venceu!");
  }
  
  return 0;
} 
