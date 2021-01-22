/**
 * About
 *
 * Author: songahra@GitHub <2041420@naver.com>
 * Date  : 2020-12-28
 * URL   : 
 *
 */

#include<stdio.h>

//1.입력을 받고 -> N
//2.N을 2로 나눈 나머지를 구한다.
//3.나머지가 0이라면, even을 출력한다. 
//4.그게 아니라면 not even을 출력한다.

int main(){
    int N;
    scanf("%d",&N);

    int R = N % 2;
    
    if(R == 0 ) printf("even\n");
    else printf("not even\n");

    return 0;
}