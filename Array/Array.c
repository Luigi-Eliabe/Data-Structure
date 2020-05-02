#include <stdio.h>
#define grade 10

int main(){

    float array[grade];
    float average = 0.0;
    float variation = 0.0;
    int i;

    for (i = 0; i < grade; i++){
        printf("Insert a grade: \n");
        scanf("%f", &array[i]);
    }

    for (i = 0; i < grade; i++){
        average = (average + array[i]);
    }

    average = average / grade;

    for (i = 0; i < grade; i++){
        variation = variation + (array[i] - average) * (array[i] - average);
    }

    variation = variation / grade;

    printf("Average: %f, Variation: %f\n", average, variation);

    return 0;
}
