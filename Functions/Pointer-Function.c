#include <stdio.h>

void change(int *pa, int *pb){
    int temporary;
    temporary = *pa;
    *pa = *pb;
    *pb = temporary;
}
int main(){
    int a = 5;
    int b = 7;

    change(&a,&b);

    printf("%d %d", a,b);

    return 0;
}
