#include <stdio.h>

int main() {
    int a[20][3], b[20][3], c[40][3];
    int i=1, j=1, k=1;
    int n1, n2;

    // Read first sparse matrix
    scanf("%d", &n1);
    for(int x=0; x<n1; x++)
        scanf("%d %d %d", &a[x][0], &a[x][1], &a[x][2]);

    // Read second sparse matrix
    scanf("%d", &n2);
    for(int x=0; x<n2; x++)
        scanf("%d %d %d", &b[x][0], &b[x][1], &b[x][2]);

    // Header
    c[0][0] = a[0][0];
    c[0][1] = a[0][1];

    // Addition logic
    while(i <= a[0][2] && j <= b[0][2]) {
        if(a[i][0] == b[j][0] && a[i][1] == b[j][1]) {
            c[k][0] = a[i][0];
            c[k][1] = a[i][1];
            c[k][2] = a[i][2] + b[j][2];
            i++; j++;
        }
        else if(a[i][0] < b[j][0] || 
               (a[i][0] == b[j][0] && a[i][1] < b[j][1])) {
            c[k][0] = a[i][0];
            c[k][1] = a[i][1];
            c[k][2] = a[i][2];
            i++;
        }
        else {
            c[k][0] = b[j][0];
            c[k][1] = b[j][1];
            c[k][2] = b[j][2];
            j++;
        }
        k++;
    }

    // Copy remaining elements
    while(i <= a[0][2]) {
        c[k][0] = a[i][0];
        c[k][1] = a[i][1];
        c[k][2] = a[i][2];
        i++; k++;
    }

    while(j <= b[0][2]) {
        c[k][0] = b[j][0];
        c[k][1] = b[j][1];
        c[k][2] = b[j][2];
        j++; k++;
    }

    // Update header
    c[0][2] = k - 1;

    // Print result
    for(int x=0; x<k; x++)
        printf("%d %d %d\n", c[x][0], c[x][1], c[x][2]);

    return 0;
}
