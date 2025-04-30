#include <stdio.h>

int main()
{
    int x1 = -1073741826;
    int y1 = -1073741826;
    int z1 = x1 + y1; 
    int temp;
    printf("%d\n", __builtin_add_overflow(x1, y1, &temp));
    printf("%d\n", z1);
    if (__builtin_add_overflow(x1, y1, &temp)) {
        printf("\tError: Overflow detected\n");
    }

    return 0;
}
