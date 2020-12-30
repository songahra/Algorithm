/**
 * About
 *
 * Author: songahra@GitHub <2041420@naver.com>
 * Date  : 2020-12-29
 * 문제  : N 부터 M 까지 출력하는 프로그램을 작성
 *         (단, 한 줄에 최대 8 개씩 출력해야 한다.)
 *
 */

#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int cnt = 0;
    
    for(int i = n ; i <= m ; i ++){
        
        printf("%d ", i);
        cnt++; //하나 출력할 때마다 cnt를 증가

        if(cnt == 8){
            printf("\n");
            cnt = 0;
        }
    }
    return 0;
}