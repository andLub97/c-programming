#include <stdio.h>

void myFunc(void)
{
    printf("Function called");
}

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    myFunc();
    int result = sum(2, 4);
    printf("Soma = %.3i", result);
    printf("\nHello C!\n");
    return 0;
}