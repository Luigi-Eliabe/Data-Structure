#include <stdio.h>

int fator(int fatorial){
    int i;
    int f = 1;

    for (i = 1; i <= fatorial; i++){
        f *= i;
    }
    return f;
}

int main(){
    int numero;

    scanf("%d", &numero);

    printf("Fatorial = %d", fator(numero));

    return 0;
}
