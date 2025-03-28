#include <stdio.h>

int main(){
    char produtoA[30] = "Notebook";
    char produtoB[30] = "Celular";

    unsigned estoqueA = 1000;
    unsigned estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;
    
    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;


    // Exibir as informações dos produtos

    printf("_________________________________________________\n\n");
    printf("  * Sistema de Comparação de Estoque e Valores * \n");
    printf("_________________________________________________\n");

    printf("\n");

    printf("- O Produto %s tem estoque %u e o valor unitario é R$ %.2f\n\n", produtoA, estoqueA, valorA);
    printf("- O Produto %s tem estoque %u e o valor unitario é R$ %.2f\n\n", produtoB, estoqueB, valorB);

    // Comparação com o valor minimo de estoque 
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;
    
    printf("- O produto %s tem estoque minimo %d\n\n", produtoA, resultadoA);
    printf("- O produto %s tem estoque minimo %d\n\n", produtoB, resultadoB);

    // Comparação entre valores totais dos produtos

    printf("- O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? %d\n", 
                                 estoqueA * valorA,
                                 estoqueB * valorB,        
                                (estoqueA * valorA) > (estoqueB * valorB));


    printf ("\n");

    return 0;

}