
/**
 * About
 *
 * Author: songahra@GitHub <2041420@naver.com>
 * Date  : 2021-01-03
 * 문제  : q
 *         
 *
 */
#include <stdio.h>

int main(){
    int a_score[10];
    int b_score[10];

    //입력 받는 부분
    for(int i=0;i<10;i++) scanf("%d", &a_score[i]);
    for(int i=0;i<10;i++) scanf("%d", &b_score[i]);
    
    int a_cnt=0, b_cnt=0;

    for(int i=1; i<=10; i++){
        int a = a_score[i-1];
        int b = b_score[i-1];

        if(a>b) a_cnt++;
        else if(a<b) b_cnt++;
    }

    if(a_cnt>b_cnt) printf("A\n");
    else if(a_cnt<b_cnt) printf("B\n");
    else printf("D\n");

    return 0;
}