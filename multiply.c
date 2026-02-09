#include <stdio.h>
int main() {

    int a[20], b[20], mul[40]={0};
    int m,n;

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

    // multiplication
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            mul[i+j] += a[i]*b[j];
        }
    }

    printf("Resultant Polynomial:\n");

    for(int i=m+n;i>=0;i--){
        if(mul[i]!=0)
            printf("%dx^%d + ",mul[i],i);
    }

    return 0;
}
