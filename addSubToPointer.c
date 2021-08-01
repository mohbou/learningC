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
    long long result = &a - &b; //their difference in mem divided by sizeof(type of variable)
    // multiply or divide pointer doesnt make sense
    printf("Result is %lld with address %p and %p\n\n", result,&a,&b);
    long long* ptr = malloc(sizeof(long long));
    long long* q = malloc(sizeof(long long));
    long long resultp = ptr -q;
    printf("Result is %lld with address %p and %p\n\n", resultp,&ptr,&q);
    return 0;
}
