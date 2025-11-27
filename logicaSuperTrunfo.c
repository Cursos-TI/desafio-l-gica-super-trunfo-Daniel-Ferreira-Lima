#include <stdio.h>

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
scanf("%d", &populacao);

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
printf("Populacao: %d\n", populacao);
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
scanf("%d", &populacao2);

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
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de pontos turisticos: %d\n", NPT2);
printf("Densidade populacional: %.2f hab/km²\n", DP2);
printf("PIB per capita: %.2f reais\n", pibpercapita2);

//COMPARAÇÃO DAS CARTAS E DETERMINANDO QUEM GANHOU!//



printf("COMPARAÇÃO DAS CARTAS: (Densidade Populacional)\n");

if (DP < DP2) {
    printf("RESULTADO: Carta 1 venceu!\n");}
else {
printf("RESULTADO: Carta 2 venceu!\n");}  
return 0;
} 