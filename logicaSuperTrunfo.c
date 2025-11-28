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

//COMPARAÇÃO DAS DUAS CARTAS ESCOLHIDAS PELO USUÁRIO//
int escolha;
int escolha2;

printf("\n Hora do duelo! Escolha o primeiro atributo no qual deseja comparar:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de pontos turísticos\n");
printf("5. Densidade demográfica\n");
printf("Sua escolha: ");
scanf("%d", &escolha);

unsigned long int resultado1;
unsigned long int resultado2;
switch(escolha){  //ESCOLHA DO USUÁRIO PARA O SEGUNDO ATRIBUTO//
    case 1:
    printf("\n Escolha seu segundo atributo:");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Sua escolha: ");
    scanf("%d", &escolha2); 
    switch (escolha2){
        
     case 2: 
     resultado1 = populacao + area;
     resultado2 = populacao2 + area2;
     break;
     case 3:
     resultado1 = populacao + pib;
     resultado2 = populacao2 + pib2;
     break;
     case 4: 
     resultado1 = populacao + NPT;
     resultado2 = populacao2 + NPT2;
     break;
     case 5:
     resultado1 = populacao - DP;
     resultado2 = populacao2 - DP2;
    }
    break;
    case 2: 
    printf("\n Escolha seu segundo atributo:");
    printf("1. População\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Sua escolha: ");
    scanf("%d", &escolha2);
    switch (escolha2){
        
     case 2: 
     resultado1 = area + populacao;
     resultado2 = area2 + populacao2;
     break;
     case 3:
     resultado1 = area + pib;
     resultado2 = area2 + pib2;
     break;
     case 4: 
     resultado1 = area + NPT;
     resultado2 = area2 + NPT2;
     break;
     case 5:
     resultado1 = area - DP;
     resultado2 = area2 - DP2;
    }
    break;
    case 3:
    printf("\n Escolha seu segundo atributo:");
    printf("1. População\n");
    printf("2. Área\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Sua escolha: ");
    scanf("%d", &escolha2);
    switch (escolha2){
        
     case 2: 
     resultado1 = pib + populacao;
     resultado2 = pib2 + populacao2;
     break;
     case 3:
     resultado1 = pib + area;
     resultado2 = pib2 + area2;
     break;
     case 4: 
     resultado1 = pib + NPT;
     resultado2 = pib2 + NPT;
     break;
     case 5:
     resultado1 = pib - DP;
     resultado2 = pib2 - DP2;
    }
    break;
    case 4:
    printf("\n Escolha seu segundo atributo:");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("5. Densidade demográfica\n");
    printf("Sua escolha: ");
    scanf("%d", &escolha2); 
    switch (escolha2){
        
     case 2: 
     resultado1 = NPT + populacao;
     resultado2 = NPT2 + populacao2;
     break;
     case 3:
     resultado1 = NPT + area;
     resultado2 = NPT2 + area2;
     break;
     case 4: 
     resultado1 = NPT + pib;
     resultado2 = NPT2 + pib2;
     break;
     case 5:
     resultado1 = pib - DP;
     resultado2 = pib2 - DP2;
    }
    break;
    case 5: 
    printf("\n Escolha seu segundo atributo:");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("Sua escolha: ");
    scanf("%d", &escolha2);
    switch (escolha2){
        
     case 2: 
     resultado1 = populacao - DP;
     resultado2 = populacao2 - DP2;
     break;
     case 3:
     resultado1 = area - DP;
     resultado2 = area2 - DP2;
     break;
     case 4: 
     resultado1 = pib - DP;
     resultado2 = pib2 - DP2;
     break;
     case 5:
     resultado1 = DP - NPT;
     resultado2 = DP2 - NPT2;
    }
    break;
 }
  
if (resultado1 > resultado2) {
    printf("A CARTA 1 É A VENCEDORA!\n");
}
else if (resultado2 == resultado1) {
    printf("EMPATE!\n");
}
else { 
    printf ("A CARTA 2 É A VENCEDORA!\n");
}

return 0;