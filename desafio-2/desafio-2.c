#include <stdio.h>
int main(){
    int num=0;
    printf("\n Digite um número da tabuada");
    scanf(" %d", &num);
    while (num <=10)
    {
        int multiplicador=1;
        printf("Tabuada de %d\n", num);

        while (multiplicador <=10)
        {
            printf("%d x %d = %d\n", num, multiplicador, num*multiplicador);
            multiplicador++;
        }
        num++;
    }
    
}