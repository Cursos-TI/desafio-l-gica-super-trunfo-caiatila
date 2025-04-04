#include <stdio.h>

int main(){
/*
ESTADO (CHAR)
CÓDIGO DA CARTA (CHAR[3])
NOME DA CIDADE (CHAR[10])
POPULAÇÃO (INT)
ÁREA EM KM (FLOAT)
PIB (FLOAT)
NÚMERO DE PONTOS TURÍSTICOS (INT)
*/
    char avanco01, avanco02, avanco03, avanco04;
    int populacao_1, pontos_turisticos_1;
    char estado_1, carta_1[4], cidade_1[20];
    float area_1, pib_1;

    int populacao_2, pontos_turisticos_2;
    char estado_2, carta_2[4], cidade_2[20];
    float area_2, pib_2;

    //Abertura
    printf("\n\nCRIANDO AS CARTAS DO SUPER TRUNFO\n\nPressione ENTER para continuar!");
    scanf("%c", &avanco01);    

    //CARTA 01
    printf("\n\nPrimeiro vamos preencher os dados da CARTA 01:\n\nPressione ENTER para continuar!\n\n");
    scanf("%c", &avanco02);

    //Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    printf("Digite a primeira letra do Estado que devera constar na primeira carta: ");
    scanf(" %c", &estado_1);
 
    //Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    printf("Digite a letra do estado da primeira carta, seguida de um codigo de 01 a 04: ");
    scanf("%s", carta_1);
         
    //Nome da Cidade: O nome da cidade. Tipo: char[] (string)
    printf("Digite a cidade que devera constar na primeira carta: ");
    scanf("%s", cidade_1);

    //População: O número de habitantes da cidade. Tipo: int
    printf("Digite a populacao referente a cidade da primeira carta: ");
    scanf("%d", &populacao_1);

    //Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
    printf("Digite a area, em km2, referente a cidade da primeira carta: ");
    scanf("%f", &area_1);

    //PIB: O Produto Interno Bruto da cidade. Tipo: float
    printf("Digite o produto interno bruto (PIB) referente a cidade da primeira carta: ");
    scanf("%f", &pib_1);

    //Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
    printf("Digite o numero de pontos turisticos existentes na cidade da primeira carta: ");
    scanf(" %d", &pontos_turisticos_1);


    printf("\n\nCARTA 01\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %d habitante(s)\nArea em km2: %.2fkm2\nPIB: R$%.2f\nNumero de pontos turisticos: %d\n", estado_1, carta_1, cidade_1, populacao_1, area_1, pib_1, pontos_turisticos_1);


    //CARTA 02
    getchar();
    printf("\n\nAgora vamos preencher os dados da CARTA 02:\n\nPressione ENTER para continuar!\n\n");
    getchar();
    //scanf(" %c", &avanco03);

    //Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    printf("Digite a primeira letra do Estado que devera constar na segunda carta: ");
    scanf(" %c", &estado_2);
 
    //Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    printf("Digite a letra do estado da segunda carta, seguida de um codigo de 01 a 04: ");
    scanf("%s", &carta_2);
         
    //Nome da Cidade: O nome da cidade. Tipo: char[] (string)
    printf("Digite a cidade que devera constar na segunda carta: ");
    scanf("%s", cidade_2);

    //População: O número de habitantes da cidade. Tipo: int
    printf("Digite a populacao referente a cidade da segunda carta: ");
    scanf("%d", &populacao_2);

    //Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
    printf("Digite a area, em km2, referente a cidade da segunda carta: ");
    scanf("%f", &area_2);

    //PIB: O Produto Interno Bruto da cidade. Tipo: float
    printf("Digite o produto interno bruto (PIB) referente a cidade da segunda carta: ");
    scanf("%f", &pib_2);

    //Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
    printf("Digite o numero de pontos turisticos existentes na cidade da segunda carta: ");
    scanf("%d", &pontos_turisticos_2);


    printf("\n\nCARTA 02\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %d habitante(s)\nArea em km2: %.2fkm2\nPIB: R$%.2f\nNumero de pontos turisticos: %d\n", estado_2, carta_2, cidade_2, populacao_2, area_2, pib_2, pontos_turisticos_2);

    getchar();
    printf("\n\nAgora, para poder comparar as duas cartas, tecle ENTER mais uma vez!");
    getchar();
    //scanf(" %c", &avanco04);
    printf("\n\nCARTA 01\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %d habitante(s)\nArea em km2: %.2fkm2\nPIB: R$%.2f\nNumero de pontos turisticos: %d\n", estado_1, carta_1, cidade_1, populacao_1, area_1, pib_1, pontos_turisticos_1);
    printf("\n\nCARTA 02\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %d habitante(s)\nArea em km2: %.2fkm2\nPIB: R$%.2f\nNumero de pontos turisticos: %d\n", estado_2, carta_2, cidade_2, populacao_2, area_2, pib_2, pontos_turisticos_2);
    printf("\n\nObrigado por participar desse experimento!\nTrata-se de um tratalho para a disciplina de Introducao a Programacao de Computadores, ministrada pelo Ilmo. Prof. Me. Sergio Cardoso, da Faculdade Estacio.\nAte a proxima.");
    getchar();



    return 0;
}
