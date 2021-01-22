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
    int m;
    int sum = 0;
    int cnt = 0;

    scanf("%d",&m);

    for(int i = 1; i <= m ; i ++){
        
        sum += i;
        cnt++;

        if(m <= sum){
            printf("%d",cnt);
            break;
        }
    }
    return 0;
}