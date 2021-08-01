#include <stdio.h>
#include <stdlib.h>

void printBytes(int * arr, int n) {
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%08x ", arr[i]);// print out each element of the array x hexadecimal first 8 character
        }
    }
    int main(int argc, char const *argv[])
    {
        int arr[]= {16,31,32,65};
    printBytes(arr,4);
        return 0;
    }
        
