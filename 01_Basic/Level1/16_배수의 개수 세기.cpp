/**
 * About
 *
 * Author: songahra@GitHub <2041420@naver.com>
 * Date  : 2020-12-30
 * URL   :
 *
 */

#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a,&b,&c);

    //a가 b보다 크다면, a와 b의 값을 바꾸어라
    /*
        a b  temp
        2 1    2
        1 1    2
        2 1    2


        a b
        1 2
    */
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }

    int cnt = 0;

    for(int i = a; i <= b; i++){
        if(i % c == 0){
            cnt ++;
        }
    }
    printf("%d\n",cnt);

    return 0;
}