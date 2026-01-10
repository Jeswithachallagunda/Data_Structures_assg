#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a = 56, b = 98;
    printf("GCD is %d\n", gcd(a, b));
    return 0;
}