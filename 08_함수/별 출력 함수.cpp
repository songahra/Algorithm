#include <stdio.h>
//가로 n개, 세로 n개의 '*'을 출력하는 프로그램


void printStarts(int n){
    for(int i=0; i<n; i++){
        printf("*");
    }
}

int main(){
    int n;
    scanf("%d", &n);

    /*
    n = 5
    *****
    *****
    *****
    *****
    *****
    */
   for (int i=0; i<n; i++){
       //별을 n개 출력하는 것
       printStarts(n);
    //    printStarts(i+1); 삼각형 1씩 증가
       printf("\n");
   }
    return 0;
}
