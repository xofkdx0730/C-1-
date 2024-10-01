#include <stdio.h>

int main() {
    int line = 4;

    for (int i = 1; i <= line; i++)
    {
        for (int j = line; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
