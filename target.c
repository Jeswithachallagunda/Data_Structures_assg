#include <stdio.h>
int main() {
    int n, x;

    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);

    int low = 0, high = n - 1;
    int found = -1;
    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == x) {
            found = mid;
            break;
        }
        else if(arr[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if(found != -1) {
        printf("Element found at index %d", found);
    } else {
        printf("Element not found");
    }

    return 0;
}