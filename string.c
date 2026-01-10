#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int count = 0;
    printf("Enter string: ");
    scanf("%s", str);
    ptr = str;
    while (*ptr != '\0') {
        count++;
        ptr++;
    }
    printf("Length: %d\n", count);
    return 0;
}

