#include <stdio.h>
// 약수 구하기
// 20
// 1 2 4 5 10 20
int main()
{
    int n;
    //입력 받는 부분
    scanf("%d", &n);

    //1부터 n까지 모든 정수에 대해서 나누어 본다.
    for(int i=1; i<=n; i++){
        //숫자 i가 n의 약수인지 판단
        if(n % i == 0) printf("%d ",i);
    }

    printf("\n");
    return 0;
}