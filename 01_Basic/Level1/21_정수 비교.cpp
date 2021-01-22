/**
 * About
 *
 * Author: songahra@GitHub <2041420@naver.com>
 * Date  : 2020-12-28
 * URL   : 
 *
 */

#include <stdio.h>

int main(){
    int first, second;

    scanf("%d %d",&first, &second);
    
    if(first > second){
        printf("%d\n", first);
    }
    else if(first < second){
        printf("%d\n", second);
    }
    else {
        printf("same\n");
    }

    return 0;
}