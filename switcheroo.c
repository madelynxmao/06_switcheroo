#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //Create an array large enough to store 10 ints.
    int my_array[10];

    //Populate the array with random values.
    srand( time(NULL) );
    int i;
    for(int i = 0; i<10; i++){
        int x = rand();
        my_array[i] = x;
    }
    //Set the last value in the array to 0.
    my_array[9] = 0;

    //Print out the values in this array.
    printf("my_array: ");
    for(int i = 0; i<10; i++){
        if(i < 9) printf("%d, ", my_array[i]);
        else printf("%d\n", my_array[i]);
    }

    //Create a separate array large enough to store 10 ints.
    int my_other_array[10];

    //USING ONLY POINTER VARIABLES & (that is, do not use the array variables) do the following:
    //Populate the second array with the values in the first but in reverse order
    //Print out the values in the second array

    int *my_arrayp = my_array + 9;
    int *my_other_arrayp = my_other_array;

    printf("my_other_array: ");
    for(int i = 0; i < 10; i++){
        my_other_array[i] = *my_arrayp;
        *(my_arrayp--);
        if(i < 9) printf("%d, ", my_other_array[i]);
        else printf("%d ", my_other_array[i]);
    }
    printf("\n");
}