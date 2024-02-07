#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t t;
    char *s;
    t = time(NULL);
    s = ctime(&t);
    printf("%s\n", s);
    return 0;
}