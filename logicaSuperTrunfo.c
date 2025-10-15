#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
   //Carta(1)
  char Estado[3]; 
  char Nome_da_Cidade[20]; 
  char Codigo_da_Carta[5];
  unsigned long int Populacao; 
  float Area; 
  float PIB; 
  int numero_de_pontos_Turísticos;
  float Dencidade_Populacional;
  float PIB_per_Capito;
  float Super_Poder;


  //Carta(2)
  char Estado2[3]; 
  char Nome_da_Cidade2[20];
  char Codigo_da_Carta2[5]; 
  unsigned long int Populacao2; /* O número de habitantes da cidade */
  float Area2; /* A área da cidade em km² */
  float PIB2; /* O produto interno bruto da cidade */
  int numero_de_pontos_Turísticos2; /* O número de pontos turísticos da cidade*/
  float Dencidade_Populacional2;
  float PIB_per_Capito2; 
  float Super_Poder2;


                                                       
  // Cadastro das Cartas:
                                                         
  printf ("  **** Cadastro da Carta 1 ****\n");
  printf("(O estado deve ser representado pela sua sigla) \n Digite a sigla do estado 1: \n ");
  scanf("%2s", Estado);
  printf("Digite o nome da cidade 1:\n");
  scanf("%19s", Nome_da_Cidade);
  printf("(O codigo da carta e composto pela primeira letra do estado + primeira letra da cidade + 01 ) \n Digite o codigo da carta da cidade 1:\n");
  scanf("%4s", Codigo_da_Carta);
  printf(" ( O número de habitantes da cidade ) \n Digite a população da cidade 1 (ex: 100000 ):\n");
  scanf("%lu", &Populacao);
  printf("Digite a área da cidade 1 (em km²):\n");
  scanf("%f", &Area);
  printf("( O produto interno bruto da cidade ) \n Digite o PIB da cidade 1:\n");
  scanf("%f", &PIB);
  printf("Digite o número de pontos turísticos da cidade 1:\n");
  scanf("%d", &numero_de_pontos_Turísticos);
  
                                                                                                                               
  printf ("\n    **** Cadastro da Carta 2 ****\n");
  printf("(O estado deve ser representado pela sua sigla) \n Digite a sigla do estado 2:\n");
  scanf("%2s", Estado);
  printf("Digite o nome da cidade 2:\n");
  scanf("%19s", Nome_da_Cidade2);
  printf("(O codigo da carta e composto pela primeira letra do estado + primeira letra da cidade + 02) \n Digite o codigo da carta da cidade 2:\n");
  scanf("%4s", Codigo_da_Carta2);
  printf("( O número de habitantes da cidade ) \n Digite a população da cidade 2:\n");
  scanf("%lu", &Populacao2);
  printf("Digite a área da cidade 2 (em km²):\n");
  scanf("%f", &Area2);
  printf("(O produto interno bruto da cidade) \n Digite o PIB da cidade 2:\n");
  scanf("%f", &PIB2);
  printf("Digite o número de pontos turísticos da cidade 2:\n");
  scanf("%d", &numero_de_pontos_Turísticos2); 
  
  // Área para cálculos Densidade Populacional e PIB per capita 
  Dencidade_Populacional = (float) Populacao / Area;
  PIB_per_Capito = (float) PIB / Populacao;
  Dencidade_Populacional2 = (float)Populacao2 / Area2;
  PIB_per_Capito2 = (float) PIB2 / Populacao2;                                                                                                                                                                                                          

  // Comparação de Cartas:
  printf ("\n    **** Resultados da Comparação ****\n");                                                                                                                                                                                                                
  
  if(Populacao > Populacao2){
      printf ("A cidade com maior população é: %s\n", Nome_da_Cidade);
  } else {
      printf ("A cidade com maior população é: %s\n", Nome_da_Cidade2);
  }

  if(Area > Area2){
      printf ("A cidade com maior área é: %s\n", Nome_da_Cidade);
  } else { 
      printf ("A cidade com maior área é: %s\n", Nome_da_Cidade2);
  }

  if(PIB > PIB2){
      printf ("A cidade com maior PIB é: %s\n", Nome_da_Cidade);
  } else {
      printf ("A cidade com maior PIB é: %s\n", Nome_da_Cidade2);
  }

  if(numero_de_pontos_Turísticos > numero_de_pontos_Turísticos2){
      printf ("A cidade com maior número de pontos turísticos é: %s\n", Nome_da_Cidade);
  } else {
      printf ("A cidade com maior número de pontos turísticos é: %s\n", Nome_da_Cidade2);
  }

  if(Dencidade_Populacional > Dencidade_Populacional2){
      printf ("A cidade com maior densidade populacional é: %s\n", Nome_da_Cidade);
  } else {
      printf ("A cidade com maior densidade populacional é: %s\n", Nome_da_Cidade2);
  }

  if(PIB_per_Capito > PIB_per_Capito2){
      printf ("A cidade com maior PIB per capita é: %s\n", Nome_da_Cidade);
  } else {
      printf ("A cidade com maior PIB per capita é: %s\n", Nome_da_Cidade2);
  }
                                                                                                                                                                                                                     
  // Exibição dos Resultados:
                                                                                                                                                                                                                      

                                                                                                                                                                                                                          // Exemplo:
                                                                                                                                                                                                                              // printf("A cidade vencedora é: %s\n", cidadeVencedora);

                                                                                                                                                                                                                                return 0;
}

