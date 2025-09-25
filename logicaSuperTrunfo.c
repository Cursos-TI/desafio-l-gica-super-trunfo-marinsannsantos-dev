#include <stdio.h>
int main() {

  //Carta 1
  char estado1 = 'A';
  char codigo1[5] = "A01";
  char cidade1[25] = "Salvador";
  int populacao1 = 2570000;
  float area1 = 693.45;
  float pib1 = 62.9; 
  int pontosturisticos1 = 20;
  float densidadepopulacional1 = populacao1 / area1;
  float densidadeinversa1 = 1 / densidadepopulacional1;
  float pibpercapita1 = (pib1 * 10000000) / populacao1;
  float superpoder1 = (long int) populacao1 + area1 + pib1 + pontosturisticos1 + densidadeinversa1 + pibpercapita1;

  //Carta 2
  char estado2 = 'B';
  char codigo2[5] = "B02";
  char cidade2[25] = "Fortaleza";
  int populacao2 = 2580000;
  float area2 = 314.93;
  float pib2 = 73.4;
  int pontosturisticos2 = 23;
  float densidadepopulacional2 = populacao2 / area2;
  float densidadeinversa2 = 1 / densidadepopulacional2;
  float pibpercapita2 = (pib2 * 10000000) / populacao2;
  float superpoder2 = (long int) populacao2 + area2 + pib2 + pontosturisticos2 + densidadeinversa2 + pibpercapita2;

  //Entrada de dados da Carta 1
  printf("** Cadastre os dados da Carta 1: **\n");

  printf("Digite o estado da Carta 1: \n");
  scanf("%c", &estado1);
    
  printf("Digite o código da Carta 1: \n");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade da Carta 1: \n");
  scanf("%s", cidade1);

  printf("Digite a população da Carta 1: \n");
  scanf("%d", &populacao1);

  printf("Digite a área da Carta 1: \n");
  scanf("%f", &area1);

  printf("Digite o PIB da Carta 1: \n");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turísticos da Carta 1: \n");
  scanf("%d", &pontosturisticos1);

  printf("\n");

  //Entrada de dados da Carta 2
  printf("** Cadastre os dados da Carta 2: **\n");

  printf("Digite o estado da Carta 2: \n");
  scanf(" %c", &estado2);

  printf("Digite o código da Carta 2: \n");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade da Carta 2: \n");
  scanf("%s", cidade2);

  printf("Digite a população da Carta 2: \n");
  scanf("%d", &populacao2);

  printf("Digite a área da Carta 2: \n");
  scanf("%f", &area2);

  printf("Digite o PIB da Carta 2: \n");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos da Carta 2: \n");
  scanf("%d", &pontosturisticos2);

  printf("\n");

  //Cartas Prontas
  printf("## Carta 1 ##\n");
  printf("Estado: %c\n", estado1);
  printf("Código da Carta: %s\n", codigo1);    
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d habitantes\n", populacao1);
  printf("Área: %.2f em km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
  printf("PIB per Capita: %.3f reais\n", pibpercapita1);
  printf("\n");
  printf("## Carta 2 ##\n");
  printf("Estado: %c\n", estado2);
  printf("Código da Carta: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d habitantes\n", populacao2);
  printf("Área: %.2f em km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
  printf("PIB per Capita: %.3f reais\n", pibpercapita2);
  printf("\n");

  int resultadoPopulacao, resultadoArea, resultadoPIB, resultadoPontosTuristicos, resultadoDensidadePopulacional, resultadoPIBperCapita, resultadoSuperPoder;

  resultadoPopulacao = populacao1 > populacao2;
  resultadoArea = area1 > area2;
  resultadoPIB = pib1 > pib2;
  resultadoPontosTuristicos = pontosturisticos1 > pontosturisticos2;
  resultadoDensidadePopulacional = densidadeinversa1 > densidadeinversa2;
  resultadoPIBperCapita = pibpercapita1 > pibpercapita2;
  resultadoSuperPoder = superpoder1 > superpoder2;
 
  //Comparação de Cartas
  printf("## Comparação de Cartas ##\n");
  printf("População: Carta 2 venceu (%d)\n", resultadoPopulacao);
  printf("Área: Carta 1 venceu (%d)\n", resultadoArea);
  printf("PIB: Carta 2 venceu (%d)\n", resultadoPIB);
  printf("Pontos Turísticos: Carta 2 venceu (%d)\n", resultadoPontosTuristicos);
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultadoDensidadePopulacional);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadoPIBperCapita);
  printf("Super Poder: Carta 2 venceu (%d)\n", resultadoSuperPoder);

    return 0;
}
