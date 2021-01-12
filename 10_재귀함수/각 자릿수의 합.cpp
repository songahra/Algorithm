#include <stdio.h>

int getDisitSum(int x){
    // x의 각 자릿수의 합을 반환하는 함수
    if(0 <= x && x <= 9 ) //x가 한자릿 수 인 경우
        return x;
    else 
        return getDisitSum(x / 10) + (x%10);
}

int main(){
    int x;
    //입력 받는 부분
    scanf("%d", &x);

    printf("%d", getDisitSum(x));

    return 0;
}