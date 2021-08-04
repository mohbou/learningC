#include <stdio.h>
#include <stdlib.h>


typedef struct Point {
    double x,y;
} Point;

Point *getMiddlePoint(const Point *p1, const Point * p2) {
   Point *m=malloc(sizeof(Point));

   m->x = (p1->x+p2->x)  /2;
   m->y = (p1->y+p2->y)  /2;

   return m;
}

void getMiddlePointv2(const Point *p1, const Point * p2, Point *m) {

   m->x = (p1->x+p2->x)  /2;
   m->y = (p1->y+p2->y)  /2;

}
int main(int argc, char const *argv[])
{
   Point p1;
   p1.x = 1;
   p1.y = 1;
   Point p2 = {
       .x =3,
       .y = 2
       };

   Point* m = getMiddlePoint(&p1, &p2);

   printf("%lf %lf\n",p1.x,p1.y);
   printf("%lf %lf\n",m->x,m->y);

   Point middle;
   getMiddlePointv2(&p1,&p2,&middle);

   printf("%lf %lf\n",middle.x,middle.y);
   free(m);
    return 0;
}
