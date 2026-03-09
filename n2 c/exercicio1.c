#include <stdio.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL, "");
    char estado1[50]; 
    char code1[20];
    char cidade1[50];
    int popular1;
    float area1;
    float pib1;
    int turisticos1;


    char estado2[50]; 
    char code2[20];
    char cidade2[50];
    int popular2;
    float area2;
    float pib2;
    int turisticos2;




    printf("cadastre a primeira carta\n");
    printf("nome do estado : \n");
    scanf(" %s", estado1);


    printf("digite o codigo :\n");
    scanf("%s", code1);

    printf("nome da cidade: \n");
    scanf(" %[^\n]", cidade1);


    printf("digite a populacao : \n");
    scanf("%d", &popular1);


    printf("digite a area: \n");
    scanf("%f", &area1);


    printf("digite o pib :\n");
    scanf("%f", &pib1);

    printf("digite o numero de pontos turisticos: ");
    scanf("%d", &turisticos1);

    printf("carta 1 cadastrada com sucesso ! \n ");


    printf("cadastre a segunda carta\n");
    printf("nome do estado : \n");
    scanf(" %s", estado2);



    printf("digite o codigo :\n");
    scanf("%s", code2);

    printf("nome da cidade: \n");
    scanf(" %[^\n]", cidade2);



    printf("digite a populacao: \n");
    scanf("%d", &popular2);


    printf("digite a area: \n");
    scanf("%f", &area2);


    printf("digite o pib :\n");
    scanf("%f", &pib2);

    printf("digite o numero de pontos turisticos: ");
    scanf("%d", &turisticos2);


    printf("Carta 1\n");
    printf("Estado :%c \n",estado1);
    printf("Codigo: %s\n", code1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao %d:\n", popular1);
    printf("Area: %.2f km\n", area1);
    printf("PIB: %.2f bilhoes: \n", pib1);
    printf("Pontos turisticos : %d\n", turisticos1);
    printf("\n");




    printf("Carta 2\n");
    printf("Estado :%c \n",estado2);
    printf("Codigo: %s\n", code2);
    printf("cidade: %s\n", cidade2);
    printf("Populacao %d:\n", popular2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f bilhoes: \n", pib2);
    printf("Pontos turisticos : %d\n", turisticos2);



}