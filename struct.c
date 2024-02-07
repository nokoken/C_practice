#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct company
{
    int id;
    char name[256];
    int salary;
};

int main(int argc, char *args[])
{
    struct company cp;
    char names[256][256] = {"山本太郎", "小泉義夫", "麻生二郎", "岸田三郎", "雨宮天"};
    for (int i = 0; i < 5; i++)
    {
        cp.id = i + 1;
        strcpy(cp.name, names[i]);
        cp.salary = (i + 1) * 1000;
        int targetSalary = atoi(args[1]);
        if (targetSalary == cp.salary || strcmp(args[2], cp.name) == 0)
            printf("id:%d name:%s salaly:%d\n", cp.id, cp.name, cp.salary);
    }
}