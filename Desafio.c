#include <stdio.h>

int main () {

    //Variaveis da Carta 1
    char estado1[10];
    char codigo_da_carta1[10];
    char nome_cidade1[10];
    int populacao1;
    float area1;
    float PIB1;
    int num_pontos_turisticos1;

    //Variaveis da Carta 2
    char estado2[10];
    char codigo_da_carta2[10];
    char nome_cidade2[10];
    int populacao2;
    float area2;
    float PIB2;
    int num_pontos_turisticos2;

    //Mensagem de boas vindas
    printf ("Bem vindo ao Super Trunfo!!!\n\nPor favor, prencha os dados solicitados abaixo!\n\n");

    //Entrada de Dados Carta 1
    printf("Digite o seu Estado: ");
    scanf("%s", estado1);

    printf("Digite o código da sua carta: ");
    scanf("%s", codigo_da_carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turisticos na sua cidade:");
    scanf("%d", &num_pontos_turisticos1);


    //Mensagem para Cadastro da Segunda Carta
    printf ("\nMuito obrigado!\n\nAgora Cadastre a segunda carta!!\n\n");

    //Entrada de Dados Carta 2
    printf("Digite o seu Estado: ");
    scanf("%s", estado2);

    printf("Digite o código da sua carta: ");
    scanf("%s", codigo_da_carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turisticos na sua cidade: ");
    scanf("%d\n\n", &num_pontos_turisticos2);


    //saida de dados da carta 1
    printf ("Carta 1:\n");
    printf ("Estado: %s\n", estado1);
    printf ("Código: %s\n", codigo_da_carta1);
    printf ("Nome da Cidade: %s\n", nome_cidade1);
    printf ("População: %d\n", populacao1);
    printf ("área: %2.f km²\n", area1);
    printf ("PIB: %2.f Bilhões de reais\n", PIB1);
    printf ("Número de Pontos Turísticos: %d\n\n", num_pontos_turisticos1);


    //saida de dados da carta 2
    printf ("Carta 2:\n");
    printf ("Estado: %s\n", estado2);
    printf ("Código: %s\n", codigo_da_carta2);
    printf ("Nome da Cidade: %s\n", nome_cidade2);
    printf ("População: %d\n", populacao2);
    printf ("área: %2.f km²\n", area2);
    printf ("PIB: %2.f Bilhões de reais\n", PIB2);
    printf ("Número de Pontos Turísticos: %d\n\n", num_pontos_turisticos2);

    //Mensagem final
    printf ("Agradecemos o cadastro das cartas!!!\nEm breve estaremos disponibilizando a continuação do jogo!!");

    return 0;
}