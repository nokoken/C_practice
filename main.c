#include <string.h>
#include <stdio.h>

// 末尾のターミネーターを除去
char *strtrim(char *str)
{
    int i;

    for (i = strlen(str); i > 0; i--)
    {
        switch (str[i])
        {
        case '\0':
            break;
        case '\n':
            str[i] = '\0';
            break;
        case '\r':
            str[i] = '\0';
            break;
        default:
            i = 0;
        }
    }
    return str;
}

int main()
{
    char *hoge = "hoadovhwoahvoejhb\0";
    char *tream_hoge = strtrim(hoge);
    printf("%s+1\n", hoge);
    printf("%s+1\n", tream_hoge);
}