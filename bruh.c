#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x = 5;
    int y = 6;

    printf("%x\n", *((&x) + 4) );
}
