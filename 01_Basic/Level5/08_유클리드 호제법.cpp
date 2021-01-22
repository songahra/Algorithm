//유클리드 호제법
//  a       b       r
//  158     86      72
//  86      72      14
//  14      2       0

// 2 | 168 86
//    -------
//     84  43

//A B   G(A와 B의최대 공약수)
//A = aG;
//B = bG;
//L = abG;

#include <stdio.h>

int main()
{
    int a,b;
    int GCD, LCM;
    //입력 받는 부분   
    scanf("%d %d", &a, &b);

    while(1){
        int r = a % b ;
        if(r == 0){
        GCD = b;
        break;

        //0이 아니면
        a = b;
        b = r;
    }

    printf("%d\n", GCD);

    return 0;
}