#include <stdio.h>

int getPower(int n, int m){
    //n^m을 반환하는 함수
    if(m == 0)
        return 1;
    else
        return getPower(n, m-1) * n;
}

int main(){
    int n, m;
    //입력 받는 부분
    scanf("%d %d", &n, &m);

    printf("%d\n",getPower(n,m));

    return 0;
}