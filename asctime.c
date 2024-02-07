#include <stdio.h>
#include <string.h>
#include <time.h>

int main(void)
{
    struct tm m;
    time_t pm[1000];
    char *s;

    memset(&pm, 0, sizeof(struct tm));

    // 2012/1/1 00:00:00
    m.tm_year = 112; // 2012年 1900年からの経過年月
    m.tm_mon = 0;
    m.tm_mday = 1;
    m.tm_hour = 0;
    m.tm_min = 0;
    m.tm_sec = 0;
    m.tm_isdst = 0; // 夏時間は無効
    m.tm_wday = 0;

    s = asctime(&m);
    printf("%s", s);

    return 0;
}