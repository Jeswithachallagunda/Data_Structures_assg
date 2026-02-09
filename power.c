#include <stdio.h>

int main() {

    int a[20], b[20], sum[40];
    int m, n, max;

    printf("Enter degree of first polynomial: ");
    scanf("%d",&m);

    printf("Enter coefficients: ");
    for(int i=0;i<=m;i++)
        scanf("%d",&a[i]);

    printf("Enter degree of second polynomial: ");
    scanf("%d",&n);

    printf("Enter coefficients: ");
    for(int i=0;i<=n;i++)
        scanf("%d",&b[i]);

    max = (m>n)? m:n;

    // initialize
    for(int i=0;i<=max;i++)
        sum[i]=0;

    // addition
    for(int i=0;i<=m;i++)
        sum[i]+=a[i];

    for(int i=0;i<=n;i++)
        sum[i]+=b[i];

    printf("Resultant Polynomial:\n");

    for(int i=max;i>=0;i--){
        if(sum[i]!=0)
            printf("%dx^%d + ",sum[i],i);
    }

    return 0;
}

