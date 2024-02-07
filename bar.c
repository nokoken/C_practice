#include <stdio.h>

int main(void)
{
    int a = 1 & 2 & 3;
    int b = 3;
    int c = 5;
    printf("%d\n", a + b + c);
    return 0;
}