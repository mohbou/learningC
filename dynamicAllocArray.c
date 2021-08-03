#include <stdio.h>
#include <stdlib.h>

// Tuto on how to dynamically allocate memory for array


int * arr; // represent array with pointer
size_t arraySize = 256;//size of array
int main(int argc, char const *argv[])
{
arr = calloc(arraySize,sizeof(int));//create array and initialze it
arraySize *=2;
arr=realloc(arr,arraySize * sizeof(int));// resize the array

free(arr);
    return 0;
}
