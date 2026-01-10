#include <stdio.h>

int main() {
    int n = 5, i, j, space;
    // Upper part
    for (i = 1; i <= n; i++) {
        for (space = 1; space <= n - i; space++) printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    // Lower part
    for (i = n - 1; i >= 1; i--) {
        for (space = 1; space <= n - i; space++) printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    return 0;
}