#include <stdio.h>
int main(){
    char myString[10];

    myString[0] = 'h';
    myString[1] = 'e';
    myString[2] = 'l';
    myString[3] = 'l';
    myString[4] = 'o';
    myString[5] = '\0'; //null문자를 넣어줌으로써 문자의 끝을 명시해준다.

    char myString2[] = "hello";

    printf("%s\n", myString); //hello
    printf("%s\n", myString2); //hello
    return 0;
}