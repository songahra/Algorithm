/**
 * About
 *
 * Author: songahra@GitHub <2041420@naver.com>
 * Date  : 2021-01-02
 * URL   :
 *
 */
#include <stdio.h>
    // 6
    // 1 8 5 9 10 3

    //myMax = 10
int main(){
    int n;
    int data[100];

    scanf("%d", &n);

    for(int i=0; i < n; i++){
        scanf("%d", &data[i]);
    }

    ////
    int myMax = data[0];

    for(int i=1; i < n; i++){
        //data[i]의 값과 myMax값을 비교
        if(data[i] > myMax) myMax = data[i];
    }
    printf("%d",myMax);

    return 0;
}