#include "wildcmp.h"

/* Main function */
int main(void)
{
    int r;

    r = wildcmp("main.c", "*.c");
    printf("%d\n", r);

    return (0);
}
