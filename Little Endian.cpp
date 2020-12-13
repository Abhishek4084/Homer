#include <stdio.h>
#include "conio.h"

int main()
{
    int i = 1;
    // address typecasting 
    char* p = (char*)&i;
    if (*p)
        printf("Little Endian");
    else
        printf("Big Endian");
    _getch;
}