#include <stdio.h>
int main(){
    float metragem1=0, metragem2=0, resultado=0;
    int saida;
    do
    {
        printf("Metragem do terreno em metros quadrados\n\n");
        printf("\n Qual seria o metro do terreno 1:");
        scanf(" %f", &metragem1);
        printf("Qual é o metro do 2º terreno: ");
        scanf(" %f", &metragem2);
        resultado = (metragem1 * metragem2);
        printf("A medida em metros é: %.2f m2 \n", resultado);
        printf("Para sair digite >= 1, para ficar digite >= 2 ");
        scanf("%d", &saida);
    
    } while (saida == 1);
    return 0;
    
}