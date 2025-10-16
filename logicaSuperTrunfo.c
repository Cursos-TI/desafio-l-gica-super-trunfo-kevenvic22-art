#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
  // Área para declaração de variáveis 
  // Definição das variáveis para armazenar as propriedades dos Países
   //Variáveis Carta(1)
  char Pais[20]; // Nome do país
  char Capital[20]; //  Nome da capital
  char Codigo_da_Carta[5]; // Código único da carta
  int Populacao; // Número de habitantes
  float Area; // em km²
  float PIB;  // Produto Interno Bruto
  int numero_de_pontos_Turísticos; // Número de pontos turísticos
  float Dencidade_Populacional; // População / Área
  float PIB_per_Capito; // PIB / População
  


  //Variáveis Carta(2)
  char Pais2[20]; // Nome do país
  char Capital2[20];   // Nome da capital
  char Codigo_da_Carta2[5]; // Código único da carta
  int Populacao2; // Número de habitantes
  float Area2; // em km²
  float PIB2; // Produto Interno Bruto
  int numero_de_pontos_Turísticos2; // Número de pontos turísticos
  float Dencidade_Populacional2;  // População / Área
  float PIB_per_Capito2;   // PIB / População
  
    // Variável para armazenar a escolha do usuário
  int escolha;

  // printf para boas vindas ao usuário
  printf("**** Bem-vindo ao Jogo Super Trunfo - Países! ****\n");
  printf("Aqui você poderá comparar duas cartas de países com base em diferentes atributos.\n");
  printf("Vamos começar cadastrando as cartas!\n\n");
  
                                                       
  // Cadastro das Cartas, entra dados de cada variável
    // Cadastro da primeira carta                                                      
  printf ("  **** Cadastro da Carta 1 ****\n"); // printf para separar o cadastro das cartas
  printf(" (Se for nome composto usa - entre eles exemplo:Coreia-do-Sul) \nDigite a nome do Pais 1: \n ");
  scanf("%25s", Pais);
  printf("(Se for nome composto usa - entre eles exemplo:Buenos-Aires) \nDigite o nome da Capital 2:\n");
  scanf("%25s", Capital);
  printf("(O codigo da carta e composto pela primeira letra do Pais + primeira letra da capital + 01 ) \n Digite o codigo da Carta1:\n");
  scanf("%4s", Codigo_da_Carta);
  printf(" ( O número de habitantes do Pais ) \n Digite a população do Pais 1 (ex: 100000 ):\n");
  scanf("%d", &Populacao);
  printf("Digite a área do Pais 1 (em km²):\n");
  scanf("%f", &Area);
  printf("( O produto interno bruto da Pais ) \n Digite o PIB do Pais 1:\n");
  scanf("%f", &PIB);
  printf("Digite o número de pontos turísticos do Pais 1:\n");
  scanf("%d", &numero_de_pontos_Turísticos);
  
   // Cadastro da segunda carta                                                                                                                            
printf ("\n  **** Cadastro da Carta 2 ****\n"); // printf para separar o cadastro das cartas
  printf(" (Se for nome composto usa - entre eles exemplo:Coreia-do-Sul) \nDigite a nome do Pais 1: \n ");
  scanf("%25s", Pais2);
  printf("(Se for nome composto usa - entre eles exemplo:Buenos-Aires) \nDigite o nome da Capital 2:\n");
  scanf("%25s", Capital2);
  printf("(O codigo da carta e composto pela primeira letra do Pais + primeira letra da Capital + 02) \n Digite o codigo da carta2:\n");
  scanf("%4s", Codigo_da_Carta2);
  printf("( O número de habitantes do Pais ) \n Digite a população do Pais 2:\n");
  scanf("%d", &Populacao2);
  printf("Digite a área do Pais 2 (em km²):\n");
  scanf("%f", &Area2);
  printf("(O produto interno bruto do Pais) \n Digite o PIB do Pais 2:\n");
  scanf("%f", &PIB2);
  printf("Digite o número de pontos turísticos do Pais  2:\n");
  scanf("%d", &numero_de_pontos_Turísticos2); 
  
  // Área para cálculos Densidade Populacional e PIB per capita 
  Dencidade_Populacional = (float) Populacao / Area;
  PIB_per_Capito = (float) PIB / Populacao;
  Dencidade_Populacional2 = (float)Populacao2 / Area2;
  PIB_per_Capito2 = (float) PIB2 / Populacao2;                                                                                                                                                                                                          

  // Menu de opções para o usuário escolher a propriedade a ser comparada
  printf("\n **** Menu de Atributos para Comparação ****\n");
  printf("\n Agoara que você já cadastrou as duas cartas, escolha o Atributos que dejeja batalhar emtre elas :\n");
  printf("os atributos são:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Número de Pontos Turísticos\n");
  printf("5 - Densidade Populacional\n");
  printf("6 - PIB per Capita\n");
  printf("Digite o número correspondente à sua escolha:\n");
  scanf("%d", &escolha);

  // Área para implementar a lógica de comparação das cartas com base na escolha do usuário
  switch (escolha) {
    case 1:
     printf("%s x %s\n", Pais, Pais2);
     printf("População %s x População %s\n", Pais, Pais2);
     printf("%d x %d\n", Populacao, Populacao2);
      if (Populacao > Populacao2) {
        printf("####  Carta1 GANHOU!\n");
      } else if (Populacao < Populacao2) {
        printf("#### Carta2 GANHOU! ####\n");
      } else { 
        printf("#### TIVEMOS UM EMPATE! ####!\n");
        
      }
      break;
    case 2:
     printf("%s x %s\n", Pais, Pais2);
     printf("Área %s x Área %s\n", Pais, Pais2);
     printf("%.2f km² x %.2f km²\n", Area, Area2);
      if (Area > Area2) 
      {
        printf("A cidade vencedora é: %s\n",  Pais);
      } else if (Area < Area2) {
        printf("A cidade vencedora é: %s\n", Pais2);
      } else {  
        printf("Empate na Área!\n"); 
      }
      break;
    case 3:
     printf("%s x %s\n", Pais, Pais2);
      printf("PIB %s x PIB %s\n", Pais, Pais2); 
      printf("R$ %.2f x R$ %.2f\n", PIB, PIB2);
      if (PIB > PIB2) {
        printf("A cidade vencedora é: %s\n",Pais);
      } else if (PIB < PIB2) {
        printf("A cidade vencedora é: %s\n", Pais2);
      } else {  
        printf("Empate no PIB!\n"); 
      }
      break;
    case 4:
     printf("%s x %s\n", Pais, Pais2);
     printf("Número de Pontos Turísticos %s x Número de Pontos Turísticos %s\n", Pais, Pais2);
     printf("%d x %d\n", numero_de_pontos_Turísticos, numero_de_pontos_Turísticos2);
      if (numero_de_pontos_Turísticos > numero_de_pontos_Turísticos2  ) {
        printf("A cidade vencedora é: %s\n", Pais);
      } else if (numero_de_pontos_Turísticos < numero_de_pontos_Turísticos2 ) {
        printf("A cidade vencedora é: %s\n", Pais2);
      } else {  
        printf("Empate no Número de Pontos Turísticos!\n"); 
      }
      break;
    case 5:
     printf("%s x %s\n", Pais, Pais2);
     printf("Densidade Populacional %s x Densidade Populacional %s\n", Pais, Pais2);
     printf("%.2f hab/km² x %.2f hab/km²\n", Dencidade_Populacional, Dencidade_Populacional2);
      if (Dencidade_Populacional < Dencidade_Populacional2) {
        printf("A cidade vencedora é: %s\n", Pais);
      } else if (Dencidade_Populacional > Dencidade_Populacional2) {
        printf("A cidade vencedora é: %s\n", Pais2);
      } else {
        printf("Empate na Densidade Populacional!\n");
      }
      break;
    case 6:
     printf("%s x %s\n", Pais, Pais2);
     printf("PIB per Capita %s x PIB per Capita %s\n", Pais, Pais2);
     printf("R$ %.2f x R$ %.2f\n", PIB_per_Capito, PIB_per_Capito2);
    
      if (PIB_per_Capito > PIB_per_Capito2) {
        printf("A cidade vencedora é: %s\n", Pais);
      } else if (PIB_per_Capito < PIB_per_Capito2) {
        printf("A cidade vencedora é: %s\n", Pais2);
      } else {
        printf("Empate no PIB per Capita!\n");
      }
      break;
    default:
      printf("Opção inválida!\n");
      break;
  }
  return 0;
}

