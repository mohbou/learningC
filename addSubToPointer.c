#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main(int argc, char const *argv[])
{
    long long a=15;
    long long b=20;
    long long c[]= {1,2,3};
    long long* p =c+1;
    printf("Result is %lld at address %p\n",*p,p);
    return 0;
}
