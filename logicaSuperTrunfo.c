#include <stdio.h>

int main (){
    //carta 1
    int populacao1,pontos_turisticos1;
    float area1,pib1,densidade1,pibcap1;
    char estado1[20],cidade1 [20], cartacode1 [20];
    //carta2
    int populacao2,pontos_turisticos2;
    float area2,pib2,densidade2,pibcap2;
    char estado2[20],cidade2[20], cartacode2[20];//não foi iniciado as variaveis pois não é nescéssario
    //geral
    int escolha, escolha2 , pontos1, pontos2;//adicionado a variavel pontos 

    printf("Bem vindo ao super trunfo\n");

    printf("Vamos a primeira carta\n");//dados da carta 1

    printf("Inserir estado\n"); //estado carta 1
    scanf(" %s",&estado1);
    printf("Inserir o codico da carta\n");//codigo da carta 1
    scanf("%s", &cartacode1);
    printf("Inserir o nome da cidade\n");//nome da cidade 1
    scanf("%s", &cidade1);
    printf("Inserir a área\n");//área da cidade 1
    scanf("%f", &area1);
    printf("Inserir o PIB\n");//PIB da cidade 1
    scanf("%f", &pib1);
    printf("Inserir a população\n");//população da cidade 1
    scanf("%d", &populacao1);
    printf("Insetir quantitade de pontos turisticos\n");//pontos turisticos 1
    scanf("%d", &pontos_turisticos1);

    pibcap1 = (float) pib1 / populacao1;//calculo do PIB per capita
    densidade1 = (float) area1 / populacao1;//calculo da densidade populacional

    printf("Vamos para a segunda carta\n");//dados da carta 2

    printf("Insersir estado\n");//estado carta 2
    scanf(" %s",&estado2);
    printf("Inserir o codico da carta\n");//codigo da carta 2
    scanf("%s", &cartacode2);
    printf("Inserir o nome da cidade\n");//nome da cidade 2
    scanf("%s", &cidade2);
    printf("Inserir a área\n");//área da cidade 2
    scanf("%f", &area2);
    printf("Inserir o PIB\n");//PIB da cidade 2
    scanf("%f", &pib2);
    printf("Inserir a população\n");//população da cidade 2
    scanf("%d", &populacao2);
    printf("Insetir quantitade de pontos turisticos\n");//pontos turisticos 2
    scanf("%d", &pontos_turisticos2);
    
    pibcap2 = (float)(pib2 / populacao2);//calculo do PIB per capita
    densidade2 = area2 / populacao2;//calculo da densidade populacional

    //exibisao das cartas

    printf("\ncarta 1:\n");// exibição da primeira carta
    printf("codico: %s\n", cartacode1);
    printf("estado: %s\n", estado1);
    printf("cidade: %s\n", cidade1);
    printf("população: %d\n", populacao1);
    printf("area: %.2f Km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("pontos turisticos: %d\n", pontos_turisticos1);
    printf("PIB per capita: %.2f\n",pibcap1);
    printf("densidade populacional: %.2f m²\n",densidade1);

    printf("\ncarta 2:\n");// exibição da primeira carta
    printf("codico: %s\n", cartacode2);
    printf("estado: %s\n", estado2);
    printf("cidade: %s\n", cidade2);
    printf("população: %d\n", populacao2);
    printf("area: %.2f Km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("pontos turisticos: %d\n", pontos_turisticos2);
    printf("PIB per capita: %.2f\n",pibcap2);
    printf("densidade populacional: %.2f m²\n",densidade2);

    //adicionar o super poder
    float superpoder1,superpoder2;
    superpoder1 = (float) populacao1 + area1 + pib1 + pontos_turisticos1 + pibcap1 - densidade1;
    superpoder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + pibcap2 - densidade2;

    printf("\nescolha o atributo que você que comparar\n");//escolha do jogador
    printf("1: população\n");
    printf("2: área\n");
    printf("3: PIB\n");
    printf("4: pontos turisticos\n");
    printf("5: densidade pupulacional\n");
    printf("6: PIB per capita\n");
    printf("7: super poder\n");
    scanf("%d", &escolha);

    switch (escolha)
    {//inicio switch
    case 1:
    printf("população de(a) %s: %d\n", cidade1,populacao1);//comparação da população
    printf("população de(a) %s: %d\n", cidade2,populacao2);
    if (populacao1 > populacao2){   
        printf("vencedor:%s\n", cidade1);}
    else if(populacao1 < populacao2){
        printf("vencedor:%s\n", cidade2);}
    else{
        printf("empare\n");}
        break;

    case 2:
    printf("area de(a) %s: %.2f\n",cidade1, area1);//comparação da area
    printf("area de(a) %s: %.2f\n",cidade2, area2);
    if (area1>area2){   
        printf("vencedor:%s\n", cidade1);}
    else if (area1<area2){
        printf("vencedor:%s\n", cidade2);}
    else{
        printf("empate\n");}
        break;

    case 3:
    printf("PIB de(a) %s: %.2f\n",cidade1, pib1);//comparação de PIB
    printf("PIB de(a) %s: %.2f\n",cidade2, pib2);
    if (pib1>pib2){   
        printf("vencedor:%s\n", cidade1);}
    else if (pib1<pib2){
        printf("vencedor:%s\n", cidade2);}
    else{
        printf("empate\n");}
    
    case 4:
    printf("pontos turisticos de(a) %s: %d\n", cidade1, pontos_turisticos1);//comparação de pontos turisticos
    printf("pontos turisticos de(a) %s: %d\n", cidade2, pontos_turisticos2);
    if (pontos_turisticos1>pontos_turisticos2){   
        printf("vencedor:%s\n", cidade1);}
    else if (pontos_turisticos1<pontos_turisticos2){
        printf("vencedor:%s\n", cidade2);}
    else{
        printf("empate\n");}
        break;

    case 5:
    printf("densidade populacional de(a) %s: %.2f\n", cidade1, densidade1);//comparação de densidade populacional
    printf("dencidade populacional de(a) %s: %.2f\n", cidade2, densidade2);
    if (densidade1<densidade2){   
        printf("vencedor:%s\n", cidade1);}
    else if (densidade1>densidade2){
        printf("vencedor:%s\n", cidade2);}
    else{
        printf("empate\n");}
        break;

    case 6:
    printf("PIB per capita de(a) %s: %.2f\n", cidade1, pibcap1);//comparação de PIB per capita
    printf("PIB per capita de(a) %s: %.2f\n", cidade2, pibcap2);
    if (pibcap1>pibcap2){   
        printf("vencedor:%s\n", cidade1);}
    else if (pibcap1<pibcap2){
        printf("vencedor:%s\n", cidade2);}
    else{
        printf("empate\n");}
        break;

    case 7:
    printf("super poder de(a) %s: %.2f", cidade1, superpoder1);//comparação de super poder
    printf("super poder de(a) %s: %.2f", cidade2, superpoder2);
    if (superpoder1>superpoder2){   
        printf("vencedor:%s\n", cidade1);}
    else if (superpoder1<superpoder2){
        printf("vencedor:%s\n", cidade2);}
    else{
        printf("empate\n");}
        break;

    default:
        printf("opção invalida\n");
        break;
    }
    printf("\nescolha o segundo atributo que você que comparar\n");//escolha do jogador
    printf("1: população\n");
    printf("2: área\n");
    printf("3: PIB\n");
    printf("4: pontos turisticos\n");
    printf("5: densidade pupulacional\n");
    printf("6: PIB per capita\n");
    printf("7: super poder\n");
    scanf("%d", &escolha2);
    
    if (escolha == escolha2){
    
        printf("opção invalida");

    }else{
        switch (escolha2)
    {
    case 1:
    printf("população de(a) %s: %d\n", cidade1,populacao1);//comparação da população
    printf("população de(a) %s: %d\n", cidade2,populacao2);
    if (populacao1 > populacao2){   
        printf("vencedor:%s\n", cidade1);}
    else if(populacao1 < populacao2){
        printf("vencedor:%s\n", cidade2);}
    else{
        printf("empare\n");}
        break;

    case 2:
    printf("area de(a) %s: %.2f\n",cidade1, area1);//comparação da area
    printf("area de(a) %s: %.2f\n",cidade2, area2);
    if (area1>area2){   
        printf("vencedor:%s\n", cidade1);}
    else if (area1<area2){
        printf("vencedor:%s\n", cidade2);}
    else{
        printf("empate\n");}
        break;

    case 3:
    printf("PIB de(a) %s: %.2f\n",cidade1, pib1);//comparação de PIB
    printf("PIB de(a) %s: %.2f\n",cidade2, pib2);
    if (pib1>pib2){   
        printf("vencedor:%s\n", cidade1);}
    else if (pib1<pib2){
        printf("vencedor:%s\n", cidade2);}
    else{
        printf("empate\n");}
    
    case 4:
    printf("pontos turisticos de(a) %s: %d\n", cidade1, pontos_turisticos1);//comparação de pontos turisticos
    printf("pontos turisticos de(a) %s: %d\n", cidade2, pontos_turisticos2);
    if (pontos_turisticos1>pontos_turisticos2){   
        printf("vencedor:%s\n", cidade1);}
    else if (pontos_turisticos1<pontos_turisticos2){
        printf("vencedor:%s\n", cidade2);}
    else{
        printf("empate\n");}
        break;

    case 5:
    printf("densidade populacional de(a) %s: %.2f\n", cidade1, densidade1);//comparação de densidade populacional
    printf("dencidade populacional de(a) %s: %.2f\n", cidade2, densidade2);
    if (densidade1<densidade2){   
        printf("vencedor:%s\n", cidade1);}
    else if (densidade1>densidade2){
        printf("vencedor:%s\n", cidade2);}
    else{
        printf("empate\n");}
        break;

    case 6:
    printf("PIB per capita de(a) %s: %.2f\n", cidade1, pibcap1);//comparação de PIB per capita
    printf("PIB per capita de(a) %s: %.2f\n", cidade2, pibcap2);
    if (pibcap1>pibcap2){   
        printf("vencedor:%s\n", cidade1);}
    else if (pibcap1<pibcap2){
        printf("vencedor:%s\n", cidade2);}
    else{
        printf("empate\n");}
        break;

    case 7:
    printf("super poder de(a) %s: %.2f", cidade1, superpoder1);//comparação de super poder
    printf("super poder de(a) %s: %.2f", cidade2, superpoder2);
    if (superpoder1>superpoder2){   
        printf("vencedor:%s\n", cidade1);}
    else if (superpoder1<superpoder2){
        printf("vencedor:%s\n", cidade2);}
    else{
        printf("empate\n");}
        break;

    default:
        printf("opção invalida\n");
        break;
    }}//fim do swith e do else
    return 0;
 } 