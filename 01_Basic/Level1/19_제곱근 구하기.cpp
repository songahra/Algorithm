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
    int n;
    scanf("%d",&n);

    // 0 : 거짓
    // 0이아닌 모든 수는 참
    for(int i=1; true; i++){

        if (n <= i*i){
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
