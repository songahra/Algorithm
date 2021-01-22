/**
 * About
 *
 * Author: songahra@GitHub <2041420@naver.com>
 * Date  : 2020-12-29
 * URL   : A 부터 B 까지 모든 숫자에 대하여 홀수는 더하고 짝수는 뺀 결과를 출력하는 프로그램
 *
 */

#include <stdio.h>

int main(){
    int a, b;
    int sum = 0;
    scanf("%d %d", &a, &b);
    
    for (int i = a ; i <= b ; i ++){
        if(i % 2 == 0){
            sum -= i;
        }else{
            sum += i;
        }

    }
    printf("%d", sum);
    return 0;
}