#include <stdio.h>

int main(){

    int n, sum = 0;
    char arr[101] = {0,}; //초기화 꼭 해주어야하는지

    scanf("%d", &n);
    scanf("%s", arr);

    for(int i=0; i<n; i++){
        sum += arr[i] - '0'; //문자'0'을 뺀 이유
    }

    printf("%d", sum);
    return 0;
    
}