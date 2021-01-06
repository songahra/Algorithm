#include <stdio.h>

int main(){
    
    int number[3];
    int sum = 0;
    
    scanf("%d %d %d", &number[0], &number[1], &number[2]);

    sum = number[0] + number[1] + number[3];

    printf("%d\n", sum);

    return 0;
}