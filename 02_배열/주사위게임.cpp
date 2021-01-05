#include <stdio.h>

int main(){
    int result = 0; //가장 큰 값을 넣을 변수
    int n; //참여하는 사람의 수 

    //입력받는 부분

    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);

        int r; //점수를 계산

        //어느 규칙에 속하는지
        if(a == b && b == c){ //규칙1
            r = 10000 + 1000 * a;
        }else if(a==b && b!=c){ //규칙2
            r = 1000 + 100 * a;
        } else if(a==c && b!=c){
            r = 1000 + 100 *a;
        } else if(b==c && a!=c){
            r = 1000 + 100 *b;
        } else {
            if(a > b && a > c) r = 100 * a;
            else if(b > a && b > c) r = 100 * b;
            else r = 100 * c;
        }

        if(result < r){
            result = r;
        }
    }

    printf("%d", result);
    return 0;
}