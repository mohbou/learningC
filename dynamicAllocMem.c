#include <stdio.h>
#include <stdlib.h>
// tutorial how to dynmically allocate memory

int main(int argc, char const *argv[])
{
    int *k=  malloc(sizeof(int)); // allocate integer from heap

    if (k == NULL)    // CHECK in case of no space availble
    {
        return 1;
    }
    
    *k = 17;
    printf("%d\n", *k);

    free(k);  // release memory reserved for allocated memory

    int* arr = malloc(sizeof(int) * 64); // allocate array with 64 elements, you can use calloc to initialize each element with 0
    if (arr == NULL)
    {
        return 2;
    }
    int i;
    for (int i = 0; i < 64; i++)
    {
        printf("%d", arr[i]);
    }

    arr=realloc(arr,32 * sizeof(int)); // let say you want to optimize your array to shrink it or expand it
    if (arr == NULL)
    {
        return 2;
    }
 

    free(arr);
    return 0;
}
