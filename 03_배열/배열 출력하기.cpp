/**
 * About
 *
 * Author: songahra@GitHub <2041420@naver.com>
 * Date  : 2021-01-02
 * 문제  : 
 *         
 *
 */

#include <stdio.h>

int main(){
    //5
    //1 2 4 3 5
    // data[0] <- 1
    // data[1] <- 2
    // data[2] <- 4
    // data[3] <- 3
    // data[4] <- 5

    int n;
    int data[100];
    scanf("%d\n", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d",&data[i]);
    }

    for(int i=0; i<n; i++){
        printf("%d ", data[i]);
    }
    
    return 0;
}