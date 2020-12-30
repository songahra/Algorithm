/**
 * About
 *
 * Author: songahra@GitHub <2041420@naver.com>
 * Date  : 2020-12-29
 * 문제  : 1 부터 N 까지의 숫자를 출력한다. 단, 3 의 배수에서는 문자 X 를 출력한다 
 *
 */

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n ; i++){
        if(i % 3 == 0) printf("x ");
        else printf("%d ",i);
    }
    return 0;
}