#include <stdio.h>
int main()
{
int a[10][10], sparse[20][3], t[20][3];
int r,c,i,j,k=1;

    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);

    printf("Matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    sparse[0][0]=r;
    sparse[0][1]=c;
    sparse[0][2]=0;

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]!=0){
                sparse[k][0]=i;
                sparse[k][1]=j;
                sparse[k][2]=a[i][j];
                k++;
                sparse[0][2]++;
            }
        }
    }
    t[0][0]=sparse[0][1];
    t[0][1]=sparse[0][0];
    t[0][2]=sparse[0][2];

    int n = sparse[0][2];
    k=1;

    for(i=0;i<c;i++){
        for(j=1;j<=n;j++){
            if(sparse[j][1]==i){
                t[k][0]=sparse[j][1];
                t[k][1]=sparse[j][0];
                t[k][2]=sparse[j][2];
                k++;
            }
        }
    }
    printf("Transpose Sparse Matrix:\n");
    for(i=0;i<=n;i++)
        printf("%d %d %d\n",t[i][0],t[i][1],t[i][2]);

    return 0;
}
