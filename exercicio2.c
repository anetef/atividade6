/*Escrever um algoritmo que leia o código do item pedido,
 a quantidade e calcule o valor a ser pago por aquele lanche.
Considere que a cada execução somente será calculado um item.*/
#include<stdio.h>

main(){ 
    int codigo,quantidade;
     float valorp;
    printf("100 - cachorro quente, 101 - Bauru Simples, 102 - Bauru c/ovo, 103 - Hamburger, 104 - Cheeseburger");
    printf("\nInforme o codigo do seu pedido:");
    scanf("%d", &codigo);
    printf("Informe a quantidade:");
    scanf("%d", &quantidade);

    switch(codigo){
    case 100:
       valorp = quantidade * 10.10;
        printf("Total a pagar pelo cahorro quente: %f", valorp);
        break;
    case 101:
    valorp = quantidade * 8.30;
        printf("Total a pagar pelo Bauru simples: %2.f", valorp);
        break;
    case 102:
    valorp = quantidade * 8.50;
        printf("Total a pagar pelo Bauru c/ovo: %2.f", valorp);
        break;
    case 103:
    valorp = quantidade * 12.50;
        printf("Total a pagar pelo Hamburguer: %2.f", valorp);
        break;
    case 104:
    valorp = quantidade * 13.25;
        printf("Total a pagar pelo Cheeseburger: %2.f", valorp);
}    
}