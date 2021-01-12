#include <stdio.h>

int getSum(int n, int m){
    //n부터 m까지의 합을 반환하는 함수
    if(n == m)
        return n;
    else
        return getSum(n, m-1) + m;
}

int main(){
    int n, m;
    //입력 받는 부분
    scanf("%d %d", &n, &m);
    printf("%d\n", getSum(n,m));
    return 0;
}