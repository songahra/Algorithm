
/**
 * About
 *
 * Author: songahra@GitHub <2041420@naver.com>
 * Date  : 2021-01-02
 * 문제  : q
 *         
 *
 */
#include <stdio.h>

int main(){
    
    int n;
    int data[100];
    int count = 0;

    //입력 받는 부분
    scanf("%d", &n);

    for(int i=0; true ; i++){
        data[i] = n % 2 ;  // 2로 나누었을 때 나머지를 배열에 저장
        n = n/2; //2로 나눈 몫을 저장
        count ++; 
        if(n == 0) break; //나눈 몫이 0이 되면 반복 끝
    }

    //배열의 요소를 역순으로 출력한다
    for(int i = count-1 ; i >=0 ; i --){
        printf("%d", data[i]);
    }

    return 0;
}