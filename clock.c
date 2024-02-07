#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(void)
{
    clock_t start, end;
    long l;
    start = clock();
    for (int _ = 0; _ < 1000000; _++)
    {
        printf("hoge\nfoo\n");
        fflush(stdout);
    }
    end = clock();
    printf("%f\n", (double)(end - start) / CLOCKS_PER_SEC);
    return 0;
}