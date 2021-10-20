#include <stdio.h>
#include <time.h>

int main(){
    // creates an array for 10 ints, sets the first to 0
    int array[10];
    array[0] = 0;

    // populate rest of array with random
    srand(time(NULL));
    for (int i = 1; i < 10; i++){
        array[i] = rand();
    }

    // print the array
    for (int i = 0; i < 10; i++){
        printf("%d\t", array[i])
    }
    printf("\n")

    // 2nd array for 10 ints
    int array_2[10];

    // pointers to both arrays
    int *p_array1 = array;
    int *p_array2 = array_2;

    printf("Using [] \n");
    for (i = 9; i >= 0; i--){
        array_2[i] = array[9 - i];
    }
    for (i = 0; i < 10; i++){
        printf("%d\n", array_2[i]);
    }

    printf("\nUsing *\n");
    for (i = 9; i >= 0; i--){
        *(array_2 + i) = *(array + 9 - i);
    }
    for (i = 0; i < 10; i++){
        printf("%d\n", array_2[i]);
    }

    return 0;
}