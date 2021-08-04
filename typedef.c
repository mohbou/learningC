#include <stdio.h>
#include <stdlib.h>


typedef unsigned long long UNI64;
typedef struct Point {
    double x,y;
} Point;


int main(int argc, char const *argv[])
{
   UNI64 l = 14;
   printf("%llu\n",l);
   Point p;
   p.x = 0.24;
   p.y = 0.78;

   printf("%lf %lf\n",p.x,p.y);
    return 0;
}
