#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int n;
    srand(time(NULL));

    n = rand()%100;
    printf("%d", n);

    return 0;
}