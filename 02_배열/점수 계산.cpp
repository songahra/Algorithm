/**
 * About
 *
 * Author: songahra@GitHub <2041420@naver.com>
 * Date  : 2021-01-03
 * 문제  : 
 *         
 *
 */

#include <stdio.h>

int main(){
    int n; //문제의 개수
    int data[100];
    int sum = 0;
    int score =0;

    //입력 받는 부분
    scanf("%d\n", &n); 
    for(int i=0; i < n ; i++){
        scanf("%d", &data[i]);
    }

    for(int i=0; i < n ; i++){
        if(data[i] == 1){
            score++;
            sum+=score;
        } else score = 0;
    }

    printf("%d", sum);

    return 0;
}