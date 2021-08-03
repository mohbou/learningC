#include <stdio.h>
#include <stdlib.h>
// tutorial on how memory is printed
typedef struct {
    int test;
    char k;
    char str[10];
    int *p;
    short sh;
} Thing;

int main(int argc, char const *argv[])
{   int i;
    Thing t = {12,'k',"testing",&i,256};
printf("%llu\n", sizeof(t));
unsigned char data;
for (i = 0; i < sizeof(t); i++)
{    if (i % 4 == 0) {
    printf("\n");
}
    data = *(((unsigned char*)&t) +i);
    printf("%02x", data);
}

    return 0;
}
