#include <stdio.h>
int main(){
    
    int number[3]; //number라는 배열 3칸
    
    scanf("%d %d %d", &number[0], &number[1], &number[2]); //정수 3개를 입력 받는다.
    printf("%d\n", number[0]+number[1]+number[2]);

    return 0;
}