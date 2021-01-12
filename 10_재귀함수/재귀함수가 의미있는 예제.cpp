#include <stdio.h>

//getFactorial(n) : n!을 반환하는 함수
int getFactorial(int n){
    if(n == 0)
        return 1;
    else
        return n * getFactorial(n-1);
}

int main(){
    int n;
    
    scanf("%d", &n);
    
    printf("%d", getFactorial(n));
    return 0;
}