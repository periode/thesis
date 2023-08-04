#include <stdio.h>

int main()
{
    int max_count = 5;
    struct int my_list[max_count] = {2046, 2047, 2048, 2049, 2050};

    for (int i = 0; i < max_count; i++)
    {
        printf("%d", my_list[i]);
    }
}