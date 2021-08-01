#include <stdio.h>
#include <stdlib.h>

void printBytes(void * arr, int n) {
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%02x ", ((char*)arr)[i]);// print out each element of the array x hexadecimal first 8 character
        }
    }
    int main(int argc, char const *argv[])
    {
        long long arr[]= {16,31,32,65};  // 8 bytes x 4 elements = 32 byte
    printBytes(arr,4 * sizeof(long long)); 
    // result is 0 00 00 00 00 00 00 00 1f 00 00 00 00 00 00 00 20 00 00 00 00 00 00 00 41 00 00 00 00 00 00 00
    // 64 bit = 32 byte
        return 0;
    }
        
