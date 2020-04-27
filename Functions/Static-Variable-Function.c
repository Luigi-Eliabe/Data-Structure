#include <stdio.h>

void print ( int a ){
    static int n = 1;

    printf("%d ", a);
    if ((n % 5) == 0) printf(" \n");
        n++;
}

int main(){

    int i;

    while(i < 100){
    print(i);
    i++;
    }

    return 0;
} 
