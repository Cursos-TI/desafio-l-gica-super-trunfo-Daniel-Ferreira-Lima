#include <stdio.h>

// Desafio Super Trunfo - Países //

int main() {

// Declaração de variáveis da carta A//

char Estado;
char Codigo[10];
char Cidade[50];
unsigned long int populacao;
float area;
float pib;
int NPT;  //NPT = Número de pontos turisticos//
float DP;
float pibpercapita;
float superpoder; //Acréscimo do SUPERPODER!//

// Declaração de variáveis da Carta B//
char Estado2;
char Codigo2[10];
char Cidade2[25];
unsigned long int populacao2;
float area2;
float pib2;
int NPT2; //NPT2 = Números de pontos turisticos
float DP2;
float pibpercapita2;
float superpoder2; //Acréscimo do SUPERPODER!//

// Leitura de valores da carta A//
printf("Insira os valores da carta 1 abaixo:");
  
printf("\nEstado: ");
scanf(" %c", &Estado);

printf("Codigo: ");
scanf("%s", Codigo);

printf("Cidade: ");
scanf("%s", Cidade);

printf("População: ");
scanf("%lu", &populacao);

printf("Área em KM²: ");
scanf("%f", &area);

printf("PIB: ");
scanf("%f", &pib);

printf("NPT: ");
scanf("%d", &NPT);

//Calculando a Densidade Populacional e PIB per capita. Carta 1//
DP = (float) populacao/area;
pibpercapita = (float) pib/populacao;

//Calculando o SUPER PODER//
superpoder = (float)populacao + area + pib + NPT + pibpercapita - DP;

// Impressão da carta A//
printf("\nCarta 1:\n");
printf("Estado: %c\n", Estado);
printf("Codigo: %s\n", Codigo);
printf("Cidade: %s\n", Cidade);
printf("Populacao: %lu\n", populacao);
printf("Área: %.2f km²\n", area);
printf("PIB: %.2f bilhões de reais\n", pib);
printf("Número de pontos turisticos: %d\n", NPT);
printf("Densidade populacional: %.2f hab/km²\n", DP);
printf("PIB per capita: %.2f reais\n", pibpercapita);

// Leitura da carta B//
printf("\nInsira os valores da carta 2 abaixo:");

printf("\nEstado: ");
scanf(" %c", &Estado2);
    
printf("Codigo: ");
scanf("%s", Codigo2);

printf("Cidade: "); 
scanf("%s", Cidade2);

printf("População: ");
scanf("%lu", &populacao2);

printf("Área em KM²: ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &pib2);

printf("NPT: ");
scanf("%d", &NPT2);

//Calculando a Densidade Populacional e PIB per capita. Carta 2//
DP2 = (float) populacao2/area2;
pibpercapita2 = (float) pib2/populacao2;

//Calculando o SUPER PODER// 
superpoder2 = (float)populacao2 + area2 + pib2 + NPT2 + pibpercapita2 - DP2;

//Impressão da carta B
printf("\nCarta 2:\n");
printf("Estado: %c\n", Estado2);
printf("Codigo: %s\n", Codigo2);
printf("Cidade: %s\n", Cidade2);
printf("Populacao: %lu\n", populacao2);
printf("Area: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de pontos turisticos: %d\n", NPT2);
printf("Densidade populacional: %.2f hab/km²\n", DP2);
printf("PIB per capita: %.2f reais\n", pibpercapita2);

//COMPARAÇÃO DAS CARTAS//
int escolha;
printf("\n Hora do duelo! Escolha qual atributo deseja comparar:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de pontos turísticos\n");
printf("5. Densidade demográfica\n");
printf("Sua escolha: ");
scanf("%d", &escolha);

switch (escolha){      //Criando o switch para verificar os números e opções escolhidas//
    case 1: 
    printf("Comparação escolhida: População!\n");
    printf("População da carta 1: %lu\n", populacao);
    printf("População da carta 2: %lu\n", populacao2);
    if (populacao > populacao2) {      //criando a logica para o resultado das comparações//
        printf("Resultado final: Carta 1 venceu!");

    }
    else if (populacao2 > populacao) {
        printf("Resultado final: Carta 2 venceu!");
    }
    else {
        printf("Resultado final: Empate!");
    }
    break;

    case 2: 
    printf("Comparação escolhida: Área!\n");
    printf("Área da carta 1: %.2f\n", area); //Exibição dos dados das cartas para o usuário//
    printf("Área da carta 2: %.2f\n", area2);
    if (area > area2) {
        printf("Resultado final: Carta 1 venceu!");

    }
    else if (area2 > area) {
        printf("Resultado final: Carta 2 venceu!");
    }
    else {
        printf("Resultado final: Empate!");   //Criando o terceiro resultado possivel: Empate//
    }
    break;
    case 3: 
    printf("Comparação escolhida: PIB!\n");
    printf("PIB da carta 1: %.2f\n", pib);
    printf("PIB  da carta 2: %.2f\n", pib2);
    if (pib > pib2) {
        printf("Resultado final: Carta 1 venceu!");

    }
    else if (pib2 > pib) {
        printf("Resultado final: Carta 2 venceu!");
    }
    else {
        printf("Resultado final: Empate!");
    }
    break;
    case 4: 
    printf("Comparação escolhida: Número de pontos turísticos!\n");
    printf("Número de pontos turísticos da carta 1: %d\n", NPT);
    printf("Número de pontos turísticos da carta 2: %d\n", NPT2);
    if (NPT > NPT2) {
        printf("Resultado final: Carta 1 venceu!");

    }
    else if (NPT2 > NPT) {
        printf("Resultado final: Carta 2 venceu!");
    }
    else {
        printf("Resultado final: Empate!");
    }
    break;
    case 5: 
    printf("Comparação escolhida: Densidade demográfica!\n");
    printf("Densidade demográfica da carta 1: %.2f\n", DP);
    printf("Densidade demográfica da carta 2: %.2f\n", DP2);
    if (DP > DP2) {
        printf("Resultado final: Carta 1 venceu!");

    }
    else if (DP2 > DP) {
        printf("Resultado final: Carta 2 venceu!");
    }
    else {
        printf("Resultado final: Empate!");
    }
    break;

}
return 0;
} 