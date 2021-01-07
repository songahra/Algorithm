
/**
 * About
 *
 * Author: songahra@GitHub <2041420@naver.com>
 * Date  : 2021-01-02
 * 문제  : 정수를 입력으로 받아 입력 받은 수를 거꾸로 출력하는 문제이다.
 *         
 *
 */

#include <stdio.h>

int main(){
    int n;
    int data[100];

    scanf("%d\n", &n);

    for(int i=0; i < n; i++){
        scanf("%d",&data[i]);
    }

    for(int i = n-1; i >= 0 ; i--){
        printf("%d ",data[i]);
    }

    return 0;
}