/**
 * About
 *
 * Author: songahra@GitHub <2041420@naver.com>
 * Date  : 2020-12-29
 * URL   : 
 *
 */

#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    int sum = 0;

    for(int i = 1; i <= n ; i ++){
        if(i % 2 == 0) //i가 짝수라면
            sum += i; // sum에 다가 i를 더한다.
    }
        printf("%d", sum);
    return 0;
}