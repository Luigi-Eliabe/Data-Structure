#include <stdio.h>
#include <stdlib.h>

float calc_average(int size, float *v){
    int i;
    float avg = 0.0;

    for (i = 0; i < size; i++){
        avg += v[i];
    }

    return (avg / size);
}

float calc_variation(int size, float *v, float avg){
    int i;
    float var = 0.0;

    for (i = 0; i < size; i++){
        var += (v[i] - avg) * (v[i] - avg);
    }

    return (var / size);
}

int main(){

    int grades_qty;
    float *array;
    float average;
    float variation;
    int i;

    printf("How many grades are you going to insert : \n");
    scanf("%d", &grades_qty);

    system("clear");

    array = (float*) malloc(grades_qty * sizeof(float));
    if (array == NULL){
        printf("Insufficient memory.\n");
        return 1;
    }

    for (i = 0; i < grades_qty; i++){
        printf("Insert a grade: \n");
        scanf("%f", &array[i]);
    }

    average = calc_average(grades_qty,array);

    variation = calc_variation(grades_qty,array,average);

    system("clear");

    printf("Average: %f, Variation: %f\n", average, variation);

    free(array);

    return 0;
}
