#include <stdio.h>
//tutorial on pointers

int main() {
int a =5;
int* ptr=&a;
printf(" This is using a pointer value of %d\n\n", *ptr);

int arr[] = {4,3,6,7,9};
int* ptr_arr=arr;
printf("This is accessing 2 element of array arr using pointer %d\n\n", *(ptr_arr+3));
return 0;


}