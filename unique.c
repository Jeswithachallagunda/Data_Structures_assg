#include <stdio.h>
int main() {
    int arr[100], n, i, j;
    int isUnique;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements are:\n");
    for(i = 0; i < n; i++) {
        isUnique = 1;
        for(j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if(isUnique)
            printf("%d ", arr[i]);
    }

    return 0;
}
