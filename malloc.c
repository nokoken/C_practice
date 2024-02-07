#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *p;

    p = malloc(128);
    snprintf(p, 128, "hello, world");
    printf("%s\n", p);
    p = malloc(200);
    snprintf(p, 200, "hello, worlds");
    printf("%s\n", p);
    free(p);
    return 0;
}