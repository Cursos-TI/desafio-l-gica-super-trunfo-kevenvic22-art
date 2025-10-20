#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
  // Área para declaração de variáveis 
  // Definição das variáveis para armazenar as propriedades dos Países
   //Variáveis Carta(1)
  char Pais[30]; // Nome do país
  char Capital[20]; //  Nome da capital
  char Codigo_da_Carta[5]; // Código único da carta
  float Populacao; // Número de habitantes
  float Area; // em km²
  float PIB;  // Produto Interno Bruto
  float numero_de_pontos_Turísticos; // Número de pontos turísticos
  float Dencidade_Populacional; // População / Área
  float PIB_per_Capito; // PIB / População

  //Variáveis Carta(2)
  char Pais2[30]; // Nome do país
  char Capital2[20];   // Nome da capital
  char Codigo_da_Carta2[5]; // Código único da carta
  float Populacao2; // Número de habitantes
  float Area2; // em km²
  float PIB2; // Produto Interno Bruto
  float numero_de_pontos_Turísticos2; // Número de pontos turísticos
  float Dencidade_Populacional2;  // População / Área
  float PIB_per_Capito2;   // PIB / População

   // variável para armasena o atributos escolhidos na primeira comparação e na segunda conparação
   int comparacao1, comparacao2;
  // variável para armazenar os resultados das comparações
  float carta1 = 0, carta2 = 0;
  // variavel paara doma de atributos 
  float somaAtributo_carta1,  somaAtributo_carta2;

  // printf para boas vindas ao usuário
  printf("        **** Bem-vindo ao Jogo Super Trunfo - Países! ****\n");
  printf("Aqui você poderá comparar duas cartas de países com base em diferentes atributos.\n");
  printf("        **** Vamos começar cadastrando as cartas##!   ****\n\n");
  
                                                       
  // Cadastro das Cartas, entra dados de cada variável
    // Cadastro da primeira carta                                                      
  printf ("  **** Cadastro da Carta 1 ****\n"); // printf para separar o cadastro das cartas
  printf(" (exemplo:Coreia-do-Sul como deve digitado  nume composto)\nDigite a nome do Pais 1:\n");
  scanf("%25s", Pais);
  printf("(Se for nome composto use - entre eles exemplo:Buenos-Aires)\nDigite o nome da Capital do Pais:\n");
  scanf("%25s", Capital);
  printf("(O codigo da carta e composto pela primeira letra do Pais + primeira letra da capital + 01 )\n Digite o codigo da Carta1:\n");
  scanf("%20s", Codigo_da_Carta);
  printf(" ( O número de habitantes do Pais )\n Digite a população do Pais 1 (ex: 100000 ):\n");
  scanf("%f", &Populacao);
  printf("Digite a área do Pais 1 (em km²):\n");
  scanf("%f", &Area);
  printf("( O produto interno bruto da Pais )\n Digite o PIB do Pais 1:\n");
  scanf("%f", &PIB);
  printf("Digite o número de pontos turísticos do Pais 1:\n");
  scanf("%f", &numero_de_pontos_Turísticos); 
  
   // Cadastro da segunda carta                                                                                                                            
printf ("\n  **** Cadastro da Carta 2 ****\n"); // printf para separar o cadastro das cartas
  printf(" (exemplo:Coreia-do-Sul como deve digitado  nume composto)\nDigite a nome do Pais 1:\n");
  scanf("%25s", Pais2);
  printf("(Se for nome composto use - entre eles exemplo:Buenos-Aires) \nDigite o nome da Capital do Pais:\n");
  scanf("%25s", Capital2);
  printf("(O codigo da carta e composto pela primeira letra do Pais + primeira letra da Capital + 02)\n Digite o codigo da carta2:\n");
  scanf("%20s", Codigo_da_Carta2);
  printf("( O número de habitantes do Pais )\n Digite a população do Pais 2:\n");
  scanf("%f", &Populacao2);
  printf("Digite a área do Pais 2 (em km²):\n");
  scanf("%f", &Area2);
  printf("(O produto interno bruto do Pais)\n Digite o PIB do Pais 2:\n");
  scanf("%f", &PIB2);
  printf("Digite o número de pontos turísticos do Pais  2:\n");
  scanf("%f", &numero_de_pontos_Turísticos2); 
  
  // Área para cálculos Densidade Populacional e PIB per capita 
  Dencidade_Populacional = (float) Populacao / Area;
  PIB_per_Capito = (float) PIB / Populacao;
  Dencidade_Populacional2 = (float)Populacao2 / Area2;
  PIB_per_Capito2 = (float) PIB2 / Populacao2;                                                                                                                                                                                                          

  // explicação para o usuário sobre o próximo passo
  printf("\nAgora que as cartas foram cadastradas.\nVocê vai poder escolher 2 atributos para fazer a comparação\n");

  // Menu de para o jogado escolher seu primeiro atributo
  printf("\n**** Escolha o seu primeiro atributo ****\n");
  printf("Os atributos são:\n");
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
     printf("Voçê escolheo ( População )\n");
     somaAtributo_carta1 += (float)Populacao;
     somaAtributo_carta2 += (float)Populacao2;
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
        printf("Voçê escolheo ( Área )\n");
        somaAtributo_carta1 += (float)Area;
        somaAtributo_carta2 += (float)Area2;
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
        printf("Voçê escolheo ( PIB )\n");
      somaAtributo_carta1 += (float)PIB;
      somaAtributo_carta2 +=(float)PIB2;
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
        printf("Voçê escolheo ( Número de pontos Turísticos )\n");
        somaAtributo_carta1 += (float)numero_de_pontos_Turísticos;
        somaAtributo_carta2 += (float)numero_de_pontos_Turísticos2;
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
        printf("Voçê escolheo ( Densidade Populacional )\n");
         somaAtributo_carta1 +=(float) Dencidade_Populacional;
        somaAtributo_carta2 += (float)Dencidade_Populacional2;
        if (Dencidade_Populacional == Dencidade_Populacional2) {
          carta1 += 1;
          carta2 += 1;
        } else if (Dencidade_Populacional < Dencidade_Populacional2) {
          carta1 += 1;
        } else {
          carta2 += 1;
        }
        break;
      case 6:
        printf("Voçê escolheo ( PIB per Capita )\n");
         somaAtributo_carta1 +=(float)PIB_per_Capito;
        somaAtributo_carta2 +=(float)PIB2;
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
     printf("Voçê escolheo ( População )\n");

     somaAtributo_carta1 += (float)Populacao;
     somaAtributo_carta2 +(float)Populacao2;
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
        printf("Voçê escolheo ( Área )\n");
        somaAtributo_carta1 += (float)Area;
        somaAtributo_carta2 += (float)Area2;
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
        printf("Voçê escolheo ( PIB )\n");
      somaAtributo_carta1 += (float)PIB;
      somaAtributo_carta2 +=(float)PIB2;
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
        printf("Voçê escolheo ( Número de pontos Turísticos )\n");
        somaAtributo_carta1 += (float)numero_de_pontos_Turísticos;
        somaAtributo_carta2 += (float)numero_de_pontos_Turísticos2;
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
        printf("Voçê escolheo ( Densidade Populacional )\n");
         somaAtributo_carta1 +=(float) Dencidade_Populacional;
        somaAtributo_carta2 += (float)Dencidade_Populacional2;
        if (Dencidade_Populacional == Dencidade_Populacional2) {
          carta1 += 1;
          carta2 += 1;
        } else if (Dencidade_Populacional < Dencidade_Populacional2) {
          carta1 += 1;
        } else {
          carta2 += 1;
        }
        break;
      case 6:
        printf("Voçê escolheo ( PIB per Capita )\n");
         somaAtributo_carta1 +=(float)PIB_per_Capito;
        somaAtributo_carta2 +=(float)PIB2;
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
     if (somaAtributo_carta1 == somaAtributo_carta2){
      printf("Empate na somas dos atributos\n");
     } else if (somaAtributo_carta1 > somaAtributo_carta2){
      carta1 += 1;
     } else {
      carta2 += 1;
     }


     // Resultado do jogor
     printf("\n\n\n****  Chagamos a hora mais esperada  ****\n");
     printf("    *** RESULTADO DO GANHADOR! ***\n\n ");


     // area de exibir os paises
     printf("Os paises que foram escolidos foi:\n");
     printf("-%s\n", Pais);
     printf("-%s\n", Pais2);

     
     // area de exebir os nome dos escolhidos atributos
     printf("\nOs atributos que batalharam foi:\n");
     switch (comparacao1)
     {
    case 1:
     printf("População 1 x População 2\n");
      break;
     case 2:
     printf("Área 1 x Área 2\n");
      break;
     case 3:
     printf("PIB 1 x PIB 2\n");
      break;
     case 4:
     printf("Pontos turísticos 1 x Pontos turísticos 2\n" );
      break;
     case 5:
     printf(" Dencidade Populacional 1 x Dencidade Populacional 2\n");
      break;
     case 6:
      printf("PIB per Capito 1 PIB per Capito 2\n");
      break;
     }

      // segundo atributo escolido par batalhar 
   switch (comparacao2)
     {
     case 1:
     printf("População 1 x População 2\n");
      break;
     case 2:
     printf("Área 1 x Área 2\n");
      break;
     case 3:
     printf("PIB 1 x PIB 2\n");
      break;
     case 4:
     printf("Pontos turísticos 1 x Pontos turísticos 2\n" );
      break;
     case 5:
     printf(" Dencidade Populacional 1 x Dencidade Populacional 2\n");
      break;
     case 6:
      printf("PIB per Capito 1 PIB per Capito 2\n");
      break;
     }

    
     // Mostra o primeiro atributo e seus valores
     printf("\nOs valores de cada atributo fio:\n");
     printf ("Os atributos da carta 1:\n");
     switch (comparacao1)
     {
     case 1:
     printf("População 1 = %2f\n", Populacao);
     printf("População 2 = %2f\n", Populacao2);
      break;
     case 2:
     printf("ÁREA 1 = %2f\n", Area);
     printf("ÁREA 2 = %2f\n", Area2);
      break;
     case 3:
     printf("PIB 1 = %2f\n", PIB);
     printf("PIB 2 = %2f\n", PIB2);
      break;
     case 4:
     printf("Pontos turísticos 1 = %2f\n", numero_de_pontos_Turísticos);
     printf("Pontos turísticos 2 = %2f\n",  numero_de_pontos_Turísticos2);
      break;
     case 5:
     printf(" Dencidade Populacional 1 = %2f\n", Dencidade_Populacional);
     printf(" Dencidade Populacional 2 = %2f\n", Dencidade_Populacional);
      break;
     case 6:
      printf("PIB per Capito 1 = %2f\n", PIB_per_Capito);
      printf("PIB per Capito 2 = %2f\n", PIB_per_Capito2);
      break;
     }

      // Mostra o segundo atributo e seus valores
   printf ("Os atributos da carta 2:\n");
   switch (comparacao2)
     {
     case 1:
     printf("População 1 = %2f\n", Populacao);
     printf("População 2 = %2f\n", Populacao2);
      break;
     case 2:
     printf("ÁREA 1 = %2f\n", Area);
     printf("ÁREA 2 = %2f\n", Area2);
      break;
     case 3:
     printf("PIB 1 = %2f\n", PIB);
     printf("PIB 2 = %2f\n", PIB2);
      break;
     case 4:
     printf("Pontos turísticos 1 = %2f\n", numero_de_pontos_Turísticos);
     printf("Pontos turísticos 2 = %2f\n",  numero_de_pontos_Turísticos2);
      break;
     case 5:
     printf(" Dencidade Populacional 1 = %2f\n", Dencidade_Populacional);
     printf(" Dencidade Populacional 2 = %2f\n", Dencidade_Populacional);
      break;
     case 6:
      printf("PIB per Capito 1 = %2f\n", PIB_per_Capito);
      printf("PIB per Capito 2 = %2f\n", PIB_per_Capito2);
      break;
     }  // FIM DO segundo atributo e seus valores
      // valores das domas dos atributos 
     printf("\nA soma dos atributos para cada carta\n");
     printf("Atributos carta 1 = %f\n", somaAtributo_carta1);
     printf("Atributos carta 2 = %f\n", somaAtributo_carta2);

     /// Resultado da carta que venceu!
     if(carta1 == 3 || carta1 == 2){
      printf("\nA GRANDE VEMCEDORA É\n***** CARTA 1 *****");
     } else if (carta2 == 3 || carta2 == 2){
      printf("\nA GRANDE VEMCEDORA É\n***** CARTA 2 *****");
     } else {
      printf ("\n**** TIVEMOS UM EMPATE *****");
     }
 
  }
  return 0;
}

