#include "stdio.h"
#include "conio.h"

int main()
{
    int num = 20;
    int arr[5];
    int i = 0;
    while (num > 0)
    {
        arr[i] = num % 2;
        num /= 2;
        i++;
    }
    for (int j = 5; j > 0; j--)
    {
        printf("%d", arr[j-1]);
    }


    _getch;
}