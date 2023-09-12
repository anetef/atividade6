/*Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence, considerando 
só os seguintes valores: 

61 - Brasília 

71 - Salvador 

11 - São Paulo 

21 - Rio de Janeiro 

32 - Juiz de Fora 

19 - Campinas 

27 - Vitória 

31 - Belo Horizonte 

Qualquer outro - uma cidade no Brasil sem identificação*/
#include<stdio.h>

main(){
    int opcao;

    printf("Informe o DDD da sua cidade:");
    scanf("%d", &opcao);

    switch(opcao){
        case 61:
            printf("\nBrasilia");
            break;
        case 71:
            printf("\nSalvador");
            break;
        case 11:
             printf("\nSao Paulo");
             break;
        case 21:
             printf("Rio de Janeiro");
             break;
        case 32:
            printf("Juiz de fora");
            break;
        case 19:
            printf("Campinas");
            break;
        case 27:
            printf("Vitoria");
            break;
        case 31:
            printf("Belo Horizonte");
            break;
        default:
            printf("Cidade do Brasil sem identificacao");
            }
}