/**
 * About
 *
 * Author: songahra@GitHub <2041420@naver.com>
 * Date  : 2020-12-29
 * 문제  : N 부터 M 까지 출력하는 프로그램을 작성
 *
 */

#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i = n ; i <= m ; i ++){
        printf("%d ", i);
    }
    return 0;
}