
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
    int data[9];
    int n;
    int myMax;
    int myMaxNum;

// 3 -> data[0]
// 29 -> data[1]
// 38 -> data[2]
// 12 -> data[3]
// 57 -> data[4]
// 74 -> data[5]
// 40 -> data[6]
// 85 -> data[7]
// 61 -> data[8]
    
    //입력 받는 부분
    for(int i=0; i < 9 ; i++){
        scanf("%d", &data[i]);
    }

    myMax = data[0];

    for(int i=1; i < 9 ; i++ ){
        if(data[i] > myMax){
            myMax = data[i];
            myMaxNum = i;
        }
    }//

    printf("%d\n%d", myMax, myMaxNum+1);

    return 0;
}