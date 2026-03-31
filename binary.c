#include <stdio.h>
int main() {
    int n, key;

    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);

    int low = 0, high = n - 1;
    int result = -1;
    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] <= key) {
            result = mid;      
            low = mid + 1;     
        } else {
            high = mid - 1;    
        }
    }
    printf("%d", result + 1);

    return 0;
}