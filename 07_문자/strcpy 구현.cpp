#include <stdio.h>
#include <string.h>

int main(){
    char A[100], B[100];

    scanf("%s", A);
    scanf("%s", B);

    printf("%s\n",A);
    printf("%s\n",B);

    //B에 있는 문자 하나하나를 A에 넣는다.
    //반복을 하는데 B의 길이 만큼 반복

    int lenB = strlen(B);

    //"Star" -> 길이가 4  null문자 까지 복사해주어야 한다.
    for(int i=0; i < lenB; i++){ // 0부터 lenB-1 까지 반복
        A[i] = B[i]; //A에다가 넣어 준다.
    }
    A[lenB] = '\0'; //문자의 끝에 null문자 

    printf("%s\n",A);
    printf("%s\n",B);
    
    return 0;
}