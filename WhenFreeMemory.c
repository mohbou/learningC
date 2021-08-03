
#define _CRTDBG_MAP_ALLOC 
#include <stdio.h> 
#include <stdlib.h>
#ifdef _MSC_VER
#include <crtdbg.h>
#else
#define _ASSERT(expr) ((void)0)

#define _ASSERTE(expr) ((void)0)
#endif

// Tuto on when you free a memory

int main(int argc, char const *argv[])
{
   int *p=malloc(sizeof(int));
   *p = -1;

   _CrtDumpMemoryLeaks();

    return 0;
}
