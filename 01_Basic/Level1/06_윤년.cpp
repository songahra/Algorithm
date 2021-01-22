#include <stdio.h>
int main(){
    //윤년은 4의 배수이며 100의 배수는 아닌 연도
    //400의 배수인 연도

    int N;
    scanf("%d", &N);
    // 0 거짓 
    if((!(N%4) && (N%100)) || !(N%400)){
        printf("YES");
    } else printf("NO");
    
    return 0;
}