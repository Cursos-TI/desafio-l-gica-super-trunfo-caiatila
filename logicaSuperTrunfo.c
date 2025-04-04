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
    char avanco01, avanco02, avanco03, avanco04, avanco05;

    unsigned long int populacao_1;
    int pontos_turisticos_1;
    char estado_1, carta_1[4], cidade_1[20];
    float area_1, pib_1;
    float densidade1, percapta1;
    float super_poder_1;

    unsigned long int populacao_2;
    int pontos_turisticos_2;
    char estado_2, carta_2[4], cidade_2[20];
    float area_2, pib_2;
    float densidade2, percapta2;
    float super_poder_2;

    int opcao1, opcao2;

    int resultado1, resultado2;

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
    scanf("%lu", &populacao_1);

    //Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
    printf("Digite a area, em km2, referente a cidade da primeira carta: ");
    scanf("%f", &area_1);

    //PIB: O Produto Interno Bruto da cidade. Tipo: float
    printf("Digite o produto interno bruto (PIB) referente a cidade da primeira carta: ");
    scanf("%f", &pib_1);

    //Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
    printf("Digite o numero de pontos turisticos existentes na cidade da primeira carta: ");
    scanf(" %d", &pontos_turisticos_1);

    //Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.
    densidade1 = (float) populacao_1 / area_1;

    //Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.
    percapta1 = (float) pib_1 / populacao_1;

    //Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). 
    super_poder_1 = (float) populacao_1 + area_1 + pib_1 + pontos_turisticos_1 + percapta1 + (1/densidade1);


    printf("\n\nCARTA 01\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nArea em km2: %.2fkm2\nPIB: R$%.2f\nNumero de pontos turisticos: %d\nDensidade populacional: %.2f\nPIB per Capta: R$%.2f\nSuper Poder: %.2f\n", estado_1, carta_1, cidade_1, populacao_1, area_1, pib_1, pontos_turisticos_1, densidade1, percapta1, super_poder_1);


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
    scanf("%s", carta_2);
         
    //Nome da Cidade: O nome da cidade. Tipo: char[] (string)
    printf("Digite a cidade que devera constar na segunda carta: ");
    scanf("%s", cidade_2);

    //População: O número de habitantes da cidade. Tipo: int
    printf("Digite a populacao referente a cidade da segunda carta: ");
    scanf("%lu", &populacao_2);

    //Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
    printf("Digite a area, em km2, referente a cidade da segunda carta: ");
    scanf("%f", &area_2);

    //PIB: O Produto Interno Bruto da cidade. Tipo: float
    printf("Digite o produto interno bruto (PIB) referente a cidade da segunda carta: ");
    scanf("%f", &pib_2);

    //Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
    printf("Digite o numero de pontos turisticos existentes na cidade da segunda carta: ");
    scanf("%d", &pontos_turisticos_2);

    //Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.
    densidade2 = (float) populacao_2 / area_2;    

    //Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.
    percapta2 = (float) pib_2 / populacao_2;

    //Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). 
    super_poder_2 = (float) populacao_2 + area_2 + pib_2 + pontos_turisticos_2 + percapta2 + (1/densidade2);

    printf("\n\nCARTA 02\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nArea em km2: %.2fkm2\nPIB: R$%.2f\nNumero de pontos turisticos: %d\nDensidade populacional: %.2f\nPIB per Capta: R$%.2f\nSuper Poder: %.2f\n", estado_2, carta_2, cidade_2, populacao_2, area_2, pib_2, pontos_turisticos_2, densidade2, percapta2, super_poder_2);

    getchar();
    printf("\n\nAgora, para poder comparar as duas cartas, tecle ENTER mais uma vez!");
    getchar();
    //scanf(" %c", &avanco04);
    printf("\n\nCARTA 01\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nArea em km2: %.2fkm2\nPIB: R$%.2f\nNumero de pontos turisticos: %d\nDensidade populacional: %.2f\nPIB per Capta: R$%.2f\nSuper Poder: %.2f\n", estado_1, carta_1, cidade_1, populacao_1, area_1, pib_1, pontos_turisticos_1, densidade1, percapta1, super_poder_1);
    printf("\n\nCARTA 02\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nArea em km2: %.2fkm2\nPIB: R$%.2f\nNumero de pontos turisticos: %d\nDensidade populacional: %.2f\nPIB per Capta: R$%.2f\nSuper Poder: %.2f\n\n\n", estado_2, carta_2, cidade_2, populacao_2, area_2, pib_2, pontos_turisticos_2, densidade2, percapta2, super_poder_2);
    

/*
    printf("\n\nTecle ENTER mais uma vez para ver o resultado!\n\n\n");
    getchar();
    //scanf(" %c", &avanco05);
    
    //Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2), exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence)
    printf("Comparacao das cartas:\n");

    if(populacao_1 > populacao_2) {
        printf("Populacao: Carta 1 venceu!\n");
    } else {
        printf("Populacao: Carta 2 venceu!\n");
    }
    
    if(area_1 > area_2) {
        printf("Area: Carta 1 venceu!\n");
    } else {
        printf("Area: Carta 2 venceu!\n");
    }

    if(pib_1 > pib_2) {
        printf("PIB: Carta 1 venceu!\n");
    } else {
        printf("PIB: Carta 2 venceu!\n");
    }
    
    if (pontos_turisticos_1 > pontos_turisticos_2) {
        printf("Pontos Turisticos: Carta 1 venceu!\n");
    } else {
        printf("Pontos Turisticos: Carta 2 venceu!\n");
    }

    if (densidade1 > densidade2) {
        printf("Densidade Populacional: Carta 1 venceu!\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu!\n");
    }

    if (percapta1 > percapta2) {
        printf("PIB per Capita: Carta 1 venceu!\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu!\n");
    }
*/

    //Menu Interativo: Criar um menu interativo no terminal usando a estrutura switch que permita ao jogador escolher qual atributo será usado para comparar as cartas. O menu deve ser claro e fácil de usar.

    printf("\n\nAgora, escolha 02 (dois) criterios de comparacao e vamos descobrir qual é a carta vencedora.\n\nTecle enter pra continuar!\n");
    getchar();

    printf("Pressione 1 para Populacao\n");
    printf("Pressione 2 para Area\n");
    printf("Pressione 3 para PIB\n");
    printf("Pressione 4 para Pontos Turisticos\n");
    printf("Pressione 5 para Densidade Populacional\n");
    printf("Pressione 6 para Pib per capta\n");
    printf("Pressione 7 para Superpoder\n\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &opcao1);
    printf("Agora escolha o segundo atributo: ");
    scanf("%d", &opcao2);




    //Utilizaçã de operadores ternários:
    opcao1 == opcao2 ? printf("Voce precisa escolher opcoes diferentes, recomece o jogo: ") : printf("Ok, vamos ver qual e a carta vencedora: \n"); //Início do else das opções

        printf("Voce escolheu as opcoes %d e %d", opcao1, opcao2);

        

    //Utilização de Switch para criação dos menus interativos
    switch (opcao1)
    {
    case 1: //primeira opcao 1, demais em sequencia
        switch (opcao2)
        {
        case 2:
        if((populacao_1 == populacao_2) && (area_1 == area_2)){
            printf("\nEmpate");
        }else if((populacao_1 + area_1) > (populacao_2 + area_2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nArea em km2: %.2fkm2\n", estado_1, carta_1, cidade_1, populacao_1, area_1);
            printf("A soma dos atributos é %.2f", populacao_1 + area_1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nArea em km2: %.2fkm2\n\n\n", estado_2, carta_2, cidade_2, populacao_2, area_2);
            printf("A soma dos atributos é %.2f", populacao_2 + area_2);
        }
        break;
        case 3:
        if((populacao_1 == populacao_2) && (pib_1 == pib_1)){
            printf("\nEmpate");
        }else if((populacao_1 + pib_1) > (populacao_2 + pib_2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nPIB: R$%.2f\n", estado_1, carta_1, cidade_1, populacao_1, pib_1);
            printf("A soma dos atributos é %.2f", populacao_1 + pib_1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nPIB: R$%.2f\n\n\n", estado_2, carta_2, cidade_2, populacao_2, pib_2);
            printf("A soma dos atributos é %.2f", populacao_2 + pib_2);

        }
        break;
        case 4:
        if((populacao_1 == populacao_2) && (pontos_turisticos_1 == pontos_turisticos_2)){
            printf("\nEmpate");
        }else if((populacao_1 + pontos_turisticos_1) > (populacao_2 + pontos_turisticos_2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nNumero de pontos turisticos: %d\n", estado_1, carta_1, cidade_1, populacao_1, pontos_turisticos_1);
            printf("A soma dos atributos é %.2f", populacao_1 + pontos_turisticos_1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nNumero de pontos turisticos: %d\n\n\n", estado_2, carta_2, cidade_2, populacao_2, pontos_turisticos_2);
            printf("A soma dos atributos é %.2f", populacao_2 + pontos_turisticos_2);
        }
        break;            
        case 5:
        if((populacao_1 == populacao_2) && (densidade1 == densidade2)){
            printf("\nEmpate");
        }else if((populacao_1 + (1/densidade1)) > (populacao_2 + (1/densidade2))){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nDensidade populacional: %.2f\n", estado_1, carta_1, cidade_1, populacao_1, densidade1);
            printf("A soma dos atributos é %.2f", populacao_1 + densidade1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nDensidade populacional: %.2f\n\n\n", estado_2, carta_2, cidade_2, populacao_2, densidade2);
            printf("A soma dos atributos é %.2f", populacao_2 + densidade2);
        }
        break;
        case 6:
        if((populacao_1 == populacao_2) && (percapta1 == percapta2)){
            printf("\nEmpate");
        }else if((populacao_1 + percapta1) > (populacao_2 + percapta2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nPIB per Capta: R$%.2f\n", estado_1, carta_1, cidade_1, populacao_1, percapta1);
            printf("A soma dos atributos é %.2f", populacao_1 + percapta1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nPIB per Capta: R$%.2f\n\n\n", estado_2, carta_2, cidade_2, populacao_2, percapta2);
            printf("A soma dos atributos é %.2f", populacao_2 + percapta2);
        }
        break;
        case 7:
        if((populacao_1 == populacao_2) && (super_poder_1 == super_poder_2)){
            printf("\nEmpate");
        }else if((populacao_1 + super_poder_1) > (populacao_2 + super_poder_2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nSuper Poder: %.2f\n", estado_1, carta_1, cidade_1, populacao_1, super_poder_1);
            printf("A soma dos atributos é %.2f", populacao_1 + super_poder_1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nSuper Poder: %.2f\n\n\n", estado_2, carta_2, cidade_2, populacao_2, super_poder_2);
            printf("A soma dos atributos é %.2f", populacao_2 + super_poder_2);
        }
        break;            
        default:
            break;
        }
        break;
    
    case 2: //primeira opcao 2, demais em sequencia
        switch (opcao2)
        {
        case 1:
        if((populacao_1 == populacao_2) && (area_1 == area_2)){
            printf("\nEmpate");
        }else if((populacao_1 + area_1) > (populacao_2 + area_2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nArea em km2: %.2fkm2\n", estado_1, carta_1, cidade_1, populacao_1, area_1);
            printf("A soma dos atributos é %.2f", populacao_1 + area_1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nArea em km2: %.2fkm2\n\n\n", estado_2, carta_2, cidade_2, populacao_2, area_2);
            printf("A soma dos atributos é %.2f", populacao_2 + area_2);
        }
        break;
        case 3:
        if((area_1 == area_2) && (pib_1 == pib_2)){
            printf("\nEmpate");
        }else if((area_1 + pib_1) > (area_2 + pib_2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nArea em km2: %.2fkm2\nPIB: R$%.2f\n", estado_1, carta_1, cidade_1, area_1, pib_1);
            printf("A soma dos atributos é %.2f", area_1 + pib_1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nArea em km2: %.2fkm2\nPIB: R$%.2f\n\n\n", estado_2, carta_2, cidade_2, area_2, pib_2);
            printf("A soma dos atributos é %.2f", area_2 + pib_2);
        }
        break;
        case 4:
        if((area_1 == area_2) && (pontos_turisticos_1 == pontos_turisticos_2)){
            printf("\nEmpate");
        }else if((area_1 + pontos_turisticos_1) > (area_2 + pontos_turisticos_2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nArea em km2: %.2fkm2\nNumero de pontos turisticos: %d\n", estado_1, carta_1, cidade_1, area_1, pontos_turisticos_1);
            printf("A soma dos atributos é %.2f", area_1 + pontos_turisticos_1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nArea em km2: %.2fkm2\nNumero de pontos turisticos: %d\n\n\n", estado_2, carta_2, cidade_2, area_2, pontos_turisticos_2);
            printf("A soma dos atributos é %.2f", area_2 + pontos_turisticos_2);
        }
        break;            
        case 5:
        if((area_1 == area_2) && (densidade1 == densidade2)){
            printf("\nEmpate");
        }else if((area_1 + (1/densidade1)) > (area_2 + (1/densidade2))){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nArea em km2: %.2fkm2\nDensidade populacional: %.2f\n", estado_1, carta_1, cidade_1, area_1, densidade1);
            printf("A soma dos atributos é %.2f", area_1 + (1/densidade1));
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nArea em km2: %.2fkm2\nDensidade populacional: %.2f\n\n\n", estado_2, carta_2, cidade_2, area_2, densidade2);
            printf("A soma dos atributos é %.2f", area_2 + (1/densidade2));
        }
        break;
        case 6:
        if((area_1 == area_2) && (percapta1 == percapta2)){
            printf("\nEmpate");
        }else if((area_1 + percapta1) > (area_2 + percapta2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nArea em km2: %.2fkm2\nPIB per Capta: R$%.2f\n", estado_1, carta_1, cidade_1, area_1, percapta1);
            printf("A soma dos atributos é %.2f", area_1 + percapta1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nArea em km2: %.2fkm2\nPIB per Capta: R$%.2f\n\n\n", estado_2, carta_2, cidade_2, area_2, percapta2);
            printf("A soma dos atributos é %.2f", area_2 + percapta2);
        }
        break;
        case 7:
        if((area_1 == area_2) && (super_poder_1 == super_poder_2)){
            printf("\nEmpate");
        }else if((area_1 + super_poder_1) > (area_2 + super_poder_2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nArea em km2: %.2fkm2\n", estado_1, carta_1, cidade_1, area_1, super_poder_1);
            printf("A soma dos atributos é %.2f", area_1 + super_poder_1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nArea em km2: %.2fkm2\n\n\n", estado_2, carta_2, cidade_2, area_2, super_poder_2);
            printf("A soma dos atributos é %.2f", area_2 + super_poder_2);
        }
        break;            
        default:
            break;
        }
        break;    

    case 3: //primeira opcao 3, demais em sequencia
        switch (opcao2)
        {
        case 1:
        if((populacao_1 == populacao_2) && (pib_1 == pib_2)){
            printf("\nEmpate");
        }else if((populacao_1 + pib_1) > (populacao_2 + pib_2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nPIB: R$%.2f\n", estado_1, carta_1, cidade_1, populacao_1, pib_1);
            printf("A soma dos atributos é %.2f", populacao_1 + pib_1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nPIB: R$%.2f\n\n\n", estado_2, carta_2, cidade_2, populacao_2, pib_2);
            printf("A soma dos atributos é %.2f", populacao_2 + pib_2);
        }
        break;
        case 2:
        if((area_1 == area_2) && (pib_1 == pib_2)){
            printf("\nEmpate");
        }else if((area_1 + pib_1) > (area_2 + pib_2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nArea em km2: %.2fkm2\nPIB: R$%.2f\n", estado_1, carta_1, cidade_1, area_1, pib_1);
            printf("A soma dos atributos é %.2f", area_1 + pib_1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nArea em km2: %.2fkm2\nPIB: R$%.2f\n\n\n", estado_2, carta_2, cidade_2, area_2, pib_2);
            printf("A soma dos atributos é %.2f", area_2 + pib_2);
        }
        break;
        case 4:
        if((pib_1 == pib_2) && (pontos_turisticos_1 == pontos_turisticos_2)){
            printf("\nEmpate");
        }else if((pib_1 + pontos_turisticos_1) > (pib_2 + pontos_turisticos_2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPIB: R$%.2f\nNumero de pontos turisticos: %d\n", estado_1, carta_1, cidade_1, pib_1, pontos_turisticos_1);
            printf("A soma dos atributos é %.2f", pib_1 + pontos_turisticos_1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPIB: R$%.2f\nNumero de pontos turisticos: %d\n\n\n", estado_2, carta_2, cidade_2, pib_2, pontos_turisticos_2);
            printf("A soma dos atributos é %.2f", pib_2 + pontos_turisticos_2);
        }
        break;            
        case 5:
        if((pib_1 == pib_2) && (densidade1 == densidade2)){
            printf("\nEmpate");
        }else if((pib_1 + (1/densidade1)) > (pib_2 + (1/densidade2))){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPIB: R$%.2f\nDensidade populacional: %.2f\n", estado_1, carta_1, cidade_1, pib_1, densidade1);
            printf("A soma dos atributos é %.2f", pib_1 + (1/densidade1));
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPIB: R$%.2f\nDensidade populacional: %.2f\n\n\n", estado_2, carta_2, cidade_2, pib_2, densidade2);
            printf("A soma dos atributos é %.2f", pib_2 + (1/densidade2));
        }
        break;
        case 6:
        if((pib_1 == pib_2) && (percapta1 == percapta2)){
            printf("\nEmpate");
        }else if((pib_1 + percapta1) > (pib_2 + percapta2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPIB: R$%.2f\nPIB per Capta: R$%.2f\n", estado_1, carta_1, cidade_1, pib_1, percapta1);
            printf("A soma dos atributos é %.2f", pib_1 + percapta1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPIB: R$%.2f\nPIB per Capta: R$%.2f\n\n\n", estado_2, carta_2, cidade_2, pib_2, percapta2);
            printf("A soma dos atributos é %.2f", pib_2 + percapta2);
        }
        break;
        case 7:
        if((pib_1 == pib_2) && (super_poder_1 == super_poder_2)){
            printf("\nEmpate");
        }else if((pib_1 + super_poder_1) > (pib_2 + super_poder_2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPIB: R$%.2f\nSuper Poder: %.2f\n", estado_1, carta_1, cidade_1, pib_1, super_poder_1);
            printf("A soma dos atributos é %.2f", pib_1 + super_poder_1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPIB: R$%.2f\nSuper Poder: %.2f\n\n\n", estado_2, carta_2, cidade_2, pib_2, super_poder_2);
            printf("A soma dos atributos é %.2f", pib_1 + super_poder_2);
        }
        break;            
        default:
            break;
        }
        break;    

    case 4: //primeira opcao 4, demais em sequencia
        switch (opcao2)
        {
        case 1:
        if((populacao_1 == populacao_2) && (pontos_turisticos_1 == pontos_turisticos_2)){
            printf("\nEmpate");
        }else if((populacao_1 + pontos_turisticos_1) > (populacao_2 + pontos_turisticos_2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nNumero de pontos turisticos: %d\n", estado_1, carta_1, cidade_1, populacao_1, pontos_turisticos_1);
            printf("A soma dos atributos é %.2f", populacao_1 + pontos_turisticos_1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nNumero de pontos turisticos: %d\n\n\n", estado_2, carta_2, cidade_2, populacao_2, pontos_turisticos_2);
            printf("A soma dos atributos é %.2f", populacao_2 + pontos_turisticos_2);
        }
        break;
        case 2:
        if((area_1 == area_2) && (pontos_turisticos_1 == pontos_turisticos_2)){
            printf("\nEmpate");
        }else if((area_1 + pontos_turisticos_1) > (area_2 + pontos_turisticos_2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nArea em km2: %.2fkm2\nNumero de pontos turisticos: %d\n", estado_1, carta_1, cidade_1, area_1, pontos_turisticos_1);
            printf("A soma dos atributos é %.2f", area_1 + pontos_turisticos_1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nArea em km2: %.2fkm2\nNumero de pontos turisticos: %d\n\n\n", estado_2, carta_2, cidade_2, area_2, pontos_turisticos_2);
            printf("A soma dos atributos é %.2f", area_2 + pontos_turisticos_2);
        }
        break;
        case 3:
        if((pib_1 == pib_2) && (pontos_turisticos_1 == pontos_turisticos_2)){
            printf("\nEmpate");
        }else if((pib_1 + pontos_turisticos_1) > (pib_2 + pontos_turisticos_2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPIB: R$%.2f\nNumero de pontos turisticos: %d\n", estado_1, carta_1, cidade_1, pib_1, pontos_turisticos_1);
            printf("A soma dos atributos é %.2f", pib_1 + pontos_turisticos_1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPIB: R$%.2f\nNumero de pontos turisticos: %d\n\n\n", estado_2, carta_2, cidade_2, pib_2, pontos_turisticos_2);
            printf("A soma dos atributos é %.2f", pib_2 + pontos_turisticos_2);
        }
        break;            
        case 5:
        if((pontos_turisticos_1 == pontos_turisticos_2) && (densidade1 == densidade2)){
            printf("\nEmpate");
        }else if((pontos_turisticos_1 + (1/densidade1)) > (pontos_turisticos_2 + (1/densidade2))){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nNumero de pontos turisticos: %d\nDensidade populacional: %.2f\n", estado_1, carta_1, cidade_1, pontos_turisticos_1, densidade1);
            printf("A soma dos atributos é %.2f", densidade1 + pontos_turisticos_1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nNumero de pontos turisticos: %d\nDensidade populacional: %.2f\n\n\n", estado_2, carta_2, cidade_2, pontos_turisticos_2, densidade2);
            printf("A soma dos atributos é %.2f", densidade2 + pontos_turisticos_2);
        }
        break;
        case 6:
        if((pontos_turisticos_1 == pontos_turisticos_2) && (percapta1 == percapta2)){
            printf("\nEmpate");
        }else if((pontos_turisticos_1 + percapta1) > (pontos_turisticos_2 + percapta2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nNumero de pontos turisticos: %d\nPIB per Capta: R$%.2f\n", estado_1, carta_1, cidade_1, pontos_turisticos_1, percapta1);
            printf("A soma dos atributos é %.2f", pontos_turisticos_1 + percapta1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nNumero de pontos turisticos: %d\nPIB per Capta: R$%.2f\n\n\n", estado_2, carta_2, cidade_2, pontos_turisticos_2, percapta2);
            printf("A soma dos atributos é %.2f", pontos_turisticos_2 + percapta2);
        }
        break;
        case 7:
        if((pontos_turisticos_1 == pontos_turisticos_2) && (super_poder_1 == super_poder_2)){
            printf("\nEmpate");
        }else if((pontos_turisticos_1 + super_poder_1) > (pontos_turisticos_2 + super_poder_2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nNumero de pontos turisticos: %d\nSuper Poder: %.2f\n", estado_1, carta_1, cidade_1, pontos_turisticos_1, super_poder_1);
            printf("A soma dos atributos é %.2f", pontos_turisticos_1 + super_poder_1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nNumero de pontos turisticos: %d\nSuper Poder: %.2f\n\n\n", estado_2, carta_2, cidade_2, pontos_turisticos_2, super_poder_2);
            printf("A soma dos atributos é %.2f", pontos_turisticos_2 + super_poder_2);
        }
        break;            
        default:
            break;
        }
        break;    

    case 5: //primeira opcao 5, demais em sequencia
        switch (opcao2)
        {
        case 1:
        if((populacao_1 == populacao_2) && ((1/densidade1) == (1/densidade2))){
            printf("\nEmpate");
        }else if((populacao_1 + (1/densidade1)) > (populacao_2 + (1/densidade2))){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nDensidade populacional: %.2f\n", estado_1, carta_1, cidade_1, populacao_1, densidade1);
            printf("A soma dos atributos é %.2f", populacao_1 + (1/densidade1));
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nDensidade populacional: %.2f\n\n\n", estado_2, carta_2, cidade_2, populacao_2, densidade2);
            printf("A soma dos atributos é %.2f", populacao_2 + (1/densidade2));
        }
        break;
        case 2:
        if((area_1 == area_2) && ((1/densidade1) == (1/densidade2))){
            printf("\nEmpate");
        }else if((area_1 + (1/densidade1)) > (area_2 + (1/densidade2))){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nArea em km2: %.2fkm2\nDensidade populacional: %.2f\n", estado_1, carta_1, cidade_1, area_1, densidade1);
            printf("A soma dos atributos é %.2f", area_1 + (1/densidade1));
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nArea em km2: %.2fkm2\nDensidade populacional: %.2f\n\n\n", estado_2, carta_2, cidade_2, area_2, densidade2);
            printf("A soma dos atributos é %.2f", area_2 + (1/densidade2));
        }
        break;
        case 3:
        if((pib_1 == pib_2) && ((1/densidade1) == (1/densidade2))){
            printf("\nEmpate");
        }else if((pib_1 + (1/densidade1)) > (pib_2 + (1/densidade2))){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPIB: R$%.2f\nDensidade populacional: %.2f\n", estado_1, carta_1, cidade_1, pib_1, densidade1);
            printf("A soma dos atributos é %.2f", pib_1 + (1/densidade1));
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPIB: R$%.2f\nDensidade populacional: %.2f\n\n\n", estado_2, carta_2, cidade_2, pib_2, densidade2);
            printf("A soma dos atributos é %.2f", pib_2 + (1/densidade2));
        }
        break;            
        case 4:
        if((pontos_turisticos_1 == pontos_turisticos_2) && ((1/densidade1) == (1/densidade2))){
            printf("\nEmpate");
        }else if((pontos_turisticos_1 + (1/densidade1)) > (pontos_turisticos_2 + (1/densidade2))){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nNumero de pontos turisticos: %d\nDensidade populacional: %.2f\n", estado_1, carta_1, cidade_1, pontos_turisticos_1, densidade1);
            printf("A soma dos atributos é %.2f", pontos_turisticos_1 + (1/densidade1));
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nNumero de pontos turisticos: %d\nDensidade populacional: %.2f\n\n\n", estado_2, carta_2, cidade_2, pontos_turisticos_2, densidade2);
            printf("A soma dos atributos é %.2f", pontos_turisticos_2 + (1/densidade2));
        }
        break;
        case 6:
        if(((1/densidade1) == (1/densidade2)) && (percapta1 == percapta2)){
            printf("\nEmpate");
        }else if(((1/densidade1) + percapta1) > ((1/densidade2) + percapta2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nDensidade populacional: %.2f\nPIB per Capta: R$%.2f\n", estado_1, carta_1, cidade_1, densidade1, percapta1);
            printf("A soma dos atributos é %.2f", percapta1 + (1/densidade1));
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nDensidade populacional: %.2f\nPIB per Capta: R$%.2f\n\n\n", estado_2, carta_2, cidade_2, densidade2, percapta2);
            printf("A soma dos atributos é %.2f", percapta2 + (1/densidade2));
        }
        break;
        case 7:
        if(((1/densidade1) == (1/densidade2)) && (super_poder_1 == super_poder_2)){
            printf("\nEmpate");
        }else if(((1/densidade1) + super_poder_1) > ((1/densidade2) + super_poder_2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nDensidade populacional: %.2f\nSuper Poder: %.2f\n", estado_1, carta_1, cidade_1, densidade1, super_poder_1);
            printf("A soma dos atributos é %.2f", super_poder_1 + (1/densidade1));
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nDensidade populacional: %.2f\nSuper Poder: %.2f\n", estado_2, carta_2, cidade_2, densidade2, super_poder_2);
            printf("A soma dos atributos é %.2f", super_poder_2 + (1/densidade2));
        }
        break;            
        default:
            break;
        }
        break;    

    case 6: //primeira opcao 6, demais em sequencia
        switch (opcao2)
        {
        case 1:
        if((populacao_1 == populacao_2) && (percapta1 == percapta2)){
            printf("\nEmpate");
        }else if((populacao_1 + percapta1) > (populacao_2 + percapta2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nPIB per Capta: R$%.2f\n", estado_1, carta_1, cidade_1, populacao_1, densidade1, percapta1);
            printf("A soma dos atributos é %.2f", populacao_1 + percapta1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nPIB per Capta: R$%.2f\n\n\n", estado_2, carta_2, cidade_2, populacao_2, densidade2, percapta2);
            printf("A soma dos atributos é %.2f", populacao_2 + percapta2);
        }
        break;
        case 2:
        if((area_1 == area_2) && (percapta1 == percapta2)){
            printf("\nEmpate");
        }else if((area_1 + percapta1) > (area_2 + percapta2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nArea em km2: %.2fkm2\nPIB per Capta: R$%.2f\n", estado_1, carta_1, cidade_1, area_1, percapta1);
            printf("A soma dos atributos é %.2f", area_1 + percapta1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nArea em km2: %.2fkm2\nPIB per Capta: R$%.2f\n\n\n", estado_2, carta_2, cidade_2, area_2, percapta2);
            printf("A soma dos atributos é %.2f", area_2 + percapta2);
        }
        break;
        case 3:
        if((pib_1 == pib_2) && (percapta1 == percapta2)){
            printf("\nEmpate");
        }else if((pib_1 + percapta1) > (pib_2 + percapta2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPIB: R$%.2f\nPIB per Capta: R$%.2f\n", estado_1, carta_1, cidade_1, pib_1, percapta1);
            printf("A soma dos atributos é %.2f", pib_1 + percapta1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPIB: R$%.2f\nPIB per Capta: R$%.2f\n", estado_2, carta_2, cidade_2, pib_2, percapta2);
            printf("A soma dos atributos é %.2f", pib_2 + percapta2);
        }
        break;            
        case 4:
        if((pontos_turisticos_1 == pontos_turisticos_2) && (percapta1 == percapta2)){
            printf("\nEmpate");
        }else if((pontos_turisticos_1 + percapta1) > (pontos_turisticos_2 + percapta2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nNumero de pontos turisticos: %d\nPIB per Capta: R$%.2f\n", estado_1, carta_1, cidade_1, pontos_turisticos_1, percapta1);
            printf("A soma dos atributos é %.2f", pontos_turisticos_1 + percapta1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nNumero de pontos turisticos: %d\nPIB per Capta: R$%.2f\n", estado_2, carta_2, cidade_2, pontos_turisticos_2, percapta2);
            printf("A soma dos atributos é %.2f", pontos_turisticos_2 + percapta2);
        }
        break;
        case 5:
        if(((1/densidade1) == (1/densidade2)) && (percapta1 == percapta2)){
            printf("\nEmpate");
        }else if(((1/densidade1) + percapta1) > ((1/densidade2) + percapta2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nDensidade populacional: %.2f\nPIB per Capta: R$%.2f\n", estado_1, carta_1, cidade_1, densidade1, percapta1);
            printf("A soma dos atributos é %.2f", (1/densidade1) + percapta1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nDensidade populacional: %.2f\nPIB per Capta: R$%.2f\n\n\n", estado_2, carta_2, cidade_2, densidade2, percapta2);
            printf("A soma dos atributos é %.2f", (1/densidade2) + percapta2);
        }
        break;
        case 7:
        if((percapta1 == percapta2) && (super_poder_1 == super_poder_2)){
            printf("\nEmpate");
        }else if((percapta1 + super_poder_1) > (percapta2 + super_poder_2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPIB per Capta: R$%.2f\nSuper Poder: %.2f\n", estado_1, carta_1, cidade_1, percapta1, super_poder_1);
            printf("A soma dos atributos é %.2f", percapta1 + super_poder_1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPIB per Capta: R$%.2f\nSuper Poder: %.2f\n\n\n", estado_2, carta_2, cidade_2, percapta2, super_poder_2);
            printf("A soma dos atributos é %.2f", percapta2+ super_poder_2);
        }
        break;            
        default:
            break;
        }
        break;    

    case 7: //primeira opcao 7, demais em sequencia
        switch (opcao2)
        {
        case 1:
        if((populacao_1 == populacao_2) && (super_poder_1 == super_poder_2)){
            printf("\nEmpate");
        }else if((populacao_1 + super_poder_1) > (populacao_2 + super_poder_2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nSuper Poder: %.2f\n", estado_1, carta_1, cidade_1, populacao_1, super_poder_1);
            printf("A soma dos atributos é %.2f", populacao_1 + super_poder_1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPopulacao: %lu habitante(s)\nSuper Poder: %.2f\n\n\n", estado_2, carta_2, cidade_2, populacao_2, super_poder_2);
            printf("A soma dos atributos é %.2f", populacao_2 + super_poder_2);
        }
        break;
        case 2:
        if((area_1 == area_2) && (super_poder_1 == super_poder_2)){
            printf("\nEmpate");
        }else if((area_1 + super_poder_1) > (area_2 + super_poder_2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nArea em km2: %.2fkm2\nSuper Poder: %.2f\n", estado_1, carta_1, cidade_1, area_1, super_poder_1);
            printf("A soma dos atributos é %.2f", area_1 + super_poder_1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nArea em km2: %.2fkm2\nSuper Poder: %.2f\n", estado_2, carta_2, cidade_2, area_2, super_poder_2);
            printf("A soma dos atributos é %.2f", area_2 + super_poder_2);
        }
        break;
        case 3:
        if((pib_1 == pib_2) && (super_poder_1 == super_poder_2)){
            printf("\nEmpate");
        }else if((pib_1 + super_poder_1) > (pib_2 + super_poder_2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPIB: R$%.2f\nSuper Poder: %.2f\n", estado_1, carta_1, cidade_1, pib_1, super_poder_1);
            printf("A soma dos atributos é %.2f", pib_1 + super_poder_1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPIB: R$%.2f\nSuper Poder: %.2f\n", estado_2, carta_2, cidade_2, pib_2, super_poder_2);
            printf("A soma dos atributos é %.2f", pib_2 + super_poder_2);
        }
        break;            
        case 4:
        if((pontos_turisticos_1 == pontos_turisticos_2) && (super_poder_1 == super_poder_2)){
            printf("\nEmpate");
        }else if((pontos_turisticos_1 + super_poder_1) > (pontos_turisticos_2 + super_poder_2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nNumero de pontos turisticos: %d\nSuper Poder: %.2f\n", estado_1, carta_1, cidade_1, pontos_turisticos_1, super_poder_1);
            printf("A soma dos atributos é %.2f", pontos_turisticos_1 + super_poder_1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nNumero de pontos turisticos: %d\nSuper Poder: %.2f\n", estado_2, carta_2, cidade_2, pontos_turisticos_2, super_poder_2);
            printf("A soma dos atributos é %.2f", pontos_turisticos_2 + super_poder_2);
        }
        break;
        case 5:
        if(((1/densidade1) == (1/densidade2)) && (super_poder_1 == super_poder_2)){
            printf("\nEmpate");
        }else if(((1/densidade1) + super_poder_1) > ((1/densidade2) + super_poder_2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nDensidade populacional: %.2f\nSuper Poder: %.2f\n", estado_1, carta_1, cidade_1, densidade1, super_poder_1);
            printf("A soma dos atributos é %.2f", (1/densidade1) + super_poder_1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nDensidade populacional: %.2f\nSuper Poder: %.2f\n", estado_2, carta_2, cidade_2, densidade2, super_poder_2);
            printf("A soma dos atributos é %.2f", (1/densidade2) + super_poder_2);
        }
        break;
        case 6:
        if((percapta1 == percapta2) && (super_poder_1 == super_poder_2)){
            printf("\nEmpate");
        }else if((percapta1 + super_poder_1) > (percapta2 + super_poder_2)){
            printf("\n\nA CARTA 01 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPIB per Capta: R$%.2f\nSuper Poder: %.2f\n", estado_1, carta_1, cidade_1, percapta1, super_poder_1);
            printf("A soma dos atributos é %.2f", percapta1 + super_poder_1);
        } else {
            printf("\n\nA CARTA 02 FOI A VENCEDORA\n\nEstado: %c\nCodigo da carta: %s\nCidade: %s\nPIB per Capta: R$%.2f\nSuper Poder: %.2f\n", estado_2, carta_2, cidade_2, percapta2, super_poder_2);
            printf("A soma dos atributos é %.2f", percapta2 + super_poder_2);
        }
        break;            
        default:
            break;
        }
        break;    


    
    
    default:
        break;
    }
    



    printf("\n\nTecle ENTER para finalizar!\n\n\n");
    getchar();
    getchar();

    printf("\n\nObrigado por participar desse experimento!\nTrata-se de um tratalho para a disciplina de Introducao a Programacao de Computadores, ministrada pelo Ilmo. Prof. Me. Sergio Cardoso, da Faculdade Estacio.\nAte a proxima.");
    getchar();
    


     //Final do else das opções

    
return 0;
}