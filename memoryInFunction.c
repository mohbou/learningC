#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    int arr1[] ={3,4};
    int arr2[]= {1,2};
    if (memcmp(arr1,arr2, 2 * sizeof(int))==0)
    {
        printf("Array are the same %d %d\n", arr1[0],arr1[1]);
    }
    else {
        printf("Array are not the same %d %d\n", arr2[0],arr2[1]);
    }


    
    return 0;
}
