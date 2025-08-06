#include <stdio.h>

int main () {

    //Variaveis da Carta 1
    char estado1[50];
    char codigo_da_carta1[50];
    char nome_cidade1[50];
    unsigned int populacao1;
    float area1;
    float PIB1;
    int num_pontos_turisticos1;
    float DensidadePopulacional1;
    float PibPerCapita1;
    float superpoder1;

    //Variaveis da Carta 2
    char estado2[50];
    char codigo_da_carta2[50];
    char nome_cidade2[50];
    unsigned int populacao2;
    float area2;
    float PIB2;
    int num_pontos_turisticos2;
    float DensidadePopulacional2;
    float PibPerCapita2;
    float superpoder2;

    //Mensagem de boas vindas
    printf ("Bem vindo ao Super Trunfo!!!\n\nPor favor, prencha os dados solicitados abaixo!\n\n");

    //Entrada de Dados Carta 1
    printf("Digite o seu Estado: ");
    scanf(" %[^\n]", estado1);

    printf("Digite o código da sua carta: ");
    scanf("%s", codigo_da_carta1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1);

    printf("Digite a população da cidade: ");
    scanf("%u", &populacao1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turisticos na sua cidade:");
    scanf("%d", &num_pontos_turisticos1);


    //Mensagem para Cadastro da Segunda Carta
    printf ("Muito obrigado!\nAgora Cadastre a segunda carta!!\n");

    //Entrada de Dados Carta 2
    printf("Digite o seu Estado: ");
    scanf(" %[^\n]", estado2);

    printf("Digite o código da sua carta: ");
    scanf("%s", codigo_da_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);

    printf("Digite a população da cidade: ");
    scanf("%u", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turisticos na sua cidade: ");
    scanf("%d", &num_pontos_turisticos2);

  

    //saida de dados da carta 1
    printf ("Carta 1:\n");
    printf ("Estado: %s\n", estado1);
    printf ("Código: %s\n", codigo_da_carta1);
    printf ("Nome da Cidade: %s\n", nome_cidade1);
    printf ("População: %d\n", populacao1);
    printf ("área: %.2f km²\n", area1);
    printf ("PIB: %.2f Bilhões de reais\n", PIB1);
    printf ("Número de Pontos Turísticos: %d\n", num_pontos_turisticos1);
    printf ("Super Poder: %f", superpoder1);

    //Calculo da densidade populacional Carta 1
    DensidadePopulacional1 = (float)populacao1 / area1;
    printf ("Densidade Populacional %.2f hab/km²\n", DensidadePopulacional1);

    //calculo do PIB per capita Carta 1
    PibPerCapita1 = (PIB1 * 1000000000) / populacao1;
    printf ("PIB per Capita: %.2f reais\n\n", PibPerCapita1);


    //saida de dados da carta 2
    printf ("Carta 2:\n");
    printf ("Estado: %s\n", estado2);
    printf ("Código: %s\n", codigo_da_carta2);
    printf ("Nome da Cidade: %s\n", nome_cidade2);
    printf ("População: %d\n", populacao2);
    printf ("área: %.2f km²\n", area2);
    printf ("PIB: %.2f Bilhões de reais\n", PIB2);
    printf ("Número de Pontos Turísticos: %d\n", num_pontos_turisticos2);
    printf ("Super Poder: %f", superpoder2);

    //Calculo da densidade populacional Carta 2
    DensidadePopulacional2 = populacao2 / area2;
    printf ("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);

    //calculo do PIB per capita Carta 2
    PibPerCapita2 = (PIB2 * 1000000000) / populacao2;
    printf ("PIB per Capita: %.2f reais\n\n", PibPerCapita2);

    //Mensagem final do cadastro
    printf ("Agradecemos o cadastro das cartas!!!\n abaixo segue o resultado da carta vencedora aspecto por aspecto!!\n\n");

    //Calculo do Superpoder 1
    superpoder1 = (float)populacao1 + area1 + PIB1 + (float)num_pontos_turisticos1;

    //Calculo do Superpoder 2
    superpoder2 = (float)populacao2 + area2 + PIB2 + (float)num_pontos_turisticos2;

    //Comparações dos aspectos das cartas 1 e 2
    if (populacao1 > populacao2)
        printf ("População: Carta 1 venceu (1)\n");
    else
        printf ("População: Carta 2 venceu (0)\n");

    if (area1 > area2)
        printf ("Área: Carta 1 venceu (1)\n");
    else
        printf ("Área: Carta 2 venceu (0)\n");

    if (PIB1 > PIB2)
        printf ("PIB: Carta 1 venceu (1)\n");
    else
        printf("PIB: Carta 0 venceu (0)\n");

    if (num_pontos_turisticos1 > num_pontos_turisticos2)
        printf ("Pontos Turísticos: Carta 1 venceu (1)\n");
    else
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");

    if (DensidadePopulacional1 < DensidadePopulacional2)
        printf ("Densidade Populacional: Carta 1 venceu (1)\n");
    else 
        printf ("Densidade Populacional: Carta 2 venceu (0)\n");

    if (PibPerCapita1 > PibPerCapita2)
        printf ("PIB per Capita: Carta 1 venceu (1)\n");
    else
        printf ("PIB per Capita: Carta 2 venceu (0)\n");

    if (superpoder1 > superpoder2)
        printf ("Super Poder: Carta 1 venceu (1)\n");
    else
        printf ("Super Poder: Carta 2 venceu (0)\n");

    return 0;
}