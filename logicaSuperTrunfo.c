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

   // variável para armasena o atributos escolhidos na primeira comparação e na segunda conparação
   int comparacao1, comparacao2;
  // variável para armazenar os resultados das comparações
  int carta1 = 0, carta2 = 0;
  

  // printf para boas vindas ao usuário
  printf("        **** Bem-vindo ao Jogo Super Trunfo - Países! ****\n");
  printf("Aqui você poderá comparar duas cartas de países com base em diferentes atributos.\n");
  printf(" ### Vamos começar cadastrando as cartas##!\n\n");
  
                                                       
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

  // explicação para o usuário sobre o próximo passo
  printf("\nAgora que as cartas foram cadastradas, você vai poder escolher 2 atributos para fazer a comparação \n");

  // Menu de para o jogado escolher seu primeiro atributo
  printf("\n **** Escolha o seu primeiro atributo ****\n");
  printf("os atributos são:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Número de pontos Turísticos\n");
  printf("5 - Densidade Populacional\n");
  printf("6 - PIB per Capita\n");
  // leitura da escolha do jogado
  printf("Digite o número correspondente à sua escolha:\n");
  scanf("%d", &comparacao1);

  // Área para implementar a lógica de comparação das cartas com base na escolha do usuário
  switch (comparacao1) {
    case 1:
     printf("Voçê escolheo ( População ) ");
       if( Populacao == Populacao2){
        carta1 += 1;
        carta2 += 1;
     } else if ( Populacao > Populacao2){
        carta1 += 1;
     } else {
        carta2 += 1;
     };
      break;
      case 2:
        printf("Voçê escolheo ( Área ) ");
        if (Area == Area2) {
          carta1 += 1;
          carta2 += 1;
        } else if (Area > Area2) {
          carta1 += 1;
        } else {
          carta2 += 1;
        }
        break;
      case 3:
        printf("Voçê escolheo ( PIB ) ");
        if (PIB == PIB2) {
          carta1 += 1;
          carta2 += 1;
        } else if (PIB > PIB2) {
          carta1 += 1;
        } else {
          carta2 += 1;
        }
        break;
      case 4:
        printf("Voçê escolheo ( Número de pontos Turísticos ) ");
        if (numero_de_pontos_Turísticos == numero_de_pontos_Turísticos2) {
          carta1 += 1;
          carta2 += 1;
        } else if (numero_de_pontos_Turísticos > numero_de_pontos_Turísticos2) {
          carta1 += 1;
        } else {
          carta2 += 1;
        }
        break;
      case 5:
        printf("Voçê escolheo ( Densidade Populacional ) ");
        if (Dencidade_Populacional == Dencidade_Populacional2) {
          carta1 += 1;
          carta2 += 1;
        } else if (Dencidade_Populacional > Dencidade_Populacional2) {
          carta1 += 1;
        } else {
          carta2 += 1;
        }
        break;
      case 6:
        printf("Voçê escolheo ( PIB per Capita ) ");
        if (PIB_per_Capito == PIB_per_Capito2) {
          carta1 += 1;
          carta2 += 1;
        } else if (PIB_per_Capito > PIB_per_Capito2) {
          carta1 += 1;
        } else {
          carta2 += 1;
        }
        break;
      default:
        printf("Opção inválida!\n");
        break;
    }
        
      // Menu de para o jogado escolher seu segundo atributo
        printf("\n **** Escolha o seu segundo atributo ****\n");
  printf("os atributos são:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Número de pontos Turísticos\n");
  printf("5 - Densidade Populacional\n");
  printf("6 - PIB per Capita\n");
  // leitura da escolha do jogado
  printf("Digite o número correspondente à sua escolha:\n");
  scanf("%d", &comparacao2);
  
  if( comparacao1 == comparacao2){
    printf("Você escolheu o mesmo atributos!\n");
  } else {
    switch (comparacao2) {
    case 1:
     printf("Voçê escolheo ( População ) ");
       if( Populacao == Populacao2){
        carta1 += 1;
        carta2 += 1;
     } else if ( Populacao > Populacao2){
        carta1 += 1;
     } else {
        carta2 += 1;
     };
      break;

      case 2:
        printf("Voçê escolheo ( Área ) ");
        if (Area == Area2) {
          carta1 += 1;
          carta2 += 1;
        } else if (Area > Area2) {
          carta1 += 1;
        } else {
          carta2 += 1;
        }
        break;
      case 3:
        printf("Voçê escolheo ( PIB ) ");
        if (PIB == PIB2) {
          carta1 += 1;
          carta2 += 1;
        } else if (PIB > PIB2) {
          carta1 += 1;
        } else {
          carta2 += 1;
        }
        break;
      case 4:
        printf("Voçê escolheo ( Número de pontos Turísticos ) ");
        if (numero_de_pontos_Turísticos == numero_de_pontos_Turísticos2) {
          carta1 += 1;
          carta2 += 1;
        } else if (numero_de_pontos_Turísticos > numero_de_pontos_Turísticos2) {
          carta1 += 1;
        } else {
          carta2 += 1;
        }
        break;
      case 5:
        printf("Voçê escolheo ( Densidade Populacional ) ");
        if (Dencidade_Populacional == Dencidade_Populacional2) {
          carta1 += 1;
          carta2 += 1;
        } else if (Dencidade_Populacional > Dencidade_Populacional2) {
          carta1 += 1;
        } else {
          carta2 += 1;
        }
        break;
      case 6:
        printf("Voçê escolheo ( PIB per Capita ) ");
        if (PIB_per_Capito == PIB_per_Capito2) {
          carta1 += 1;
          carta2 += 1;
        } else if (PIB_per_Capito > PIB_per_Capito2) {
          carta1 += 1;
        } else {
          carta2 += 1;
        }
        break;
      default:
        printf("Opção inválida!\n");
        break;
    }
    // soma dos 2 atributos escolhio para cada carta 
    
  }
  return 0;
}

