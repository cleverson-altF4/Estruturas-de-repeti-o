#include <stdio.h>
int main(){
    int multiplicador=0, num, res;
    printf("Tabuada de qual número?");
    scanf("%d", &num);
    while (multiplicador <=10)
    {
        res = num * multiplicador;
        printf("%d x %d = %d\n", num, multiplicador, res);
        multiplicador++;
    }
    return 0;
}