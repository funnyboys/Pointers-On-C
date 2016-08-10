/**
 * 2016-8-10 powered by funnyboys
**/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
    int c;
    char sum = -1;

    while((c = getchar()) != EOF) {
        putchar(c);
        sum += c;
    }

    printf("%d\n", sum);

    return EXIT_SUCCESS;
}
