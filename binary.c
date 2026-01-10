#include <stdio.h>
int main() 
{
int num, i = 0;
int binary[32];
printf("Enter a number:");
scanf("%d", &num);
if(num == 0){
    printf("binary: o\n");
    return 0;
}
while(num > 0) {
binary[i] = num % 2;
num = num/2;
i++;
}
printf("binary:");
for (int j = i - 1; j>= 0; j--){
    printf("%d", binary[j]);
}
    return 0;
}