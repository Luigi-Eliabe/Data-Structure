#include <stdio.h>
#define grade 3

float calc_average(int size, float* v){
    int i;
    float avg = 0.0;

    for (i = 0; i < size; i++){
        avg += v[i];
    }

    return (avg / size);
}

float calc_variation(int size, float* v, float avg){
    int i;
    float var = 0.0;

    for (i = 0; i < size; i++){
        var += (v[i] - avg) * (v[i] - avg);
    }

    return (var / size);
}

int main(){

    float array[grade];
    float average;
    float variation;
    int i;

    for (i = 0; i < grade; i++){
        printf("Insert a grade: \n");
        scanf("%f", &array[i]);
    }

    average = calc_average(grade,array);

    variation = calc_variation(grade,array,average);

    printf("Average: %f, Variation: %f\n", average, variation);

    return 0;
}    
