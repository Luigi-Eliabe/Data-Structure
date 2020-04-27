#include <stdio.h>
int factorial(int a){
    if (a == 0){
        return 1;
    }else{
        return a * factorial(a-1);
    }
}

int main(){
    int number;    

    printf("Insert a number: \n");
    scanf("%d", &number);

    printf("The factorial of the number %d is %d\n", number, factorial(number));

    return 0;
}
