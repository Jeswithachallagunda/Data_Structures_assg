#include <stdio.h>
int main() {
int capacity;
scanf("%d", &capacity);
int queue[100];
  for(int i = 0; i < capacity; i++) {
  scanf("%d", &queue[i]);
    }
  printf("Original queue: ");
  for(int i = 0; i < capacity; i++) {
  printf("%d ", queue[i]);
    }
    for(int i = 0; i < capacity/2; i++) {
        int temp = queue[i];
        queue[i] = queue[capacity - i - 1];
        queue[capacity - i - 1] = temp;
    }

    printf("\nReversed queue: ");
    for(int i = 0; i < capacity; i++) {
        printf("%d ", queue[i]);
    }
return 0;
}