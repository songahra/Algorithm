#include <stdio.h>

int main(){
    char myString[100];

    scanf("%s", myString); // **문자열은 &를 빼고 입력 받는다. 문자열이 띄어쓰기를 포함하지 않는다.

    int cnt = 0;
    int index = 0;

    while(1){
        if(myString[index] == '\0'){
            break;
        } else {
            cnt ++;
        }
        index++;
    }
    printf("%d\n", cnt);
    return 0;
}