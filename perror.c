#include <stdio.h>

int main()
{
    FILE *f;
    f = fopen("test.txt", "r");

    if (f == NULL)
    {
        perror("エラーが発生しました！\n");
        return 0;
    }
    else
        printf("ファイルが開きました！\n");
    fclose(f);
    return 0;
}