#include <stdio.h>

int main()
{
    int num1, num2;
    struct digchar
    {
        int num;
        char alpha[3];
    };
    struct digchar sample1 = { 2, 'a', 'b', 'c' };
    struct digchar sample2 = { 3, 'd', 'e', 'f' };
    printf("Enter the ordered pair \n");
    scanf_s("%d %d", &num1, &num2);
    if ((num1 == sample1.num) && (num2 == sample2.num))
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf(" %c%c ", sample1.alpha[i], sample2.alpha[j]);
            }
            printf("\n");
        }
    }
    else if ((num1 == sample2.num) && (num2 == sample1.num))
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf(" %c%c ", sample2.alpha[i], sample1.alpha[j]);
            }
            printf("\n");
        }
    }
}