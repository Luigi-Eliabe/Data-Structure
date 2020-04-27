#include <stdio.h>

int factor(int factorial){
    int i;
    int f = 1;

    for (i = 1; i <= factorial; i++){
        f *= i;
    }
    return f;
}

int main(){
    int number;    

    printf("Insert a number:\n");
    scanf("%d", &number);

    printf("Factorial = %d\n", factor(number));

    return 0;
}
