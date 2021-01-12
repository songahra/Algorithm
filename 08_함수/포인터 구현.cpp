#include <stdio.h>
int main(){
    int* address; //변수의 주소를 담는다.  address가 가리키는 변수는 int형 변수
    int x;

    x = 3;
    address = &x; //x를 가리키게 한다. = x의 주소를 갖고 있는다.
    
    printf("%p\n", address); //주소를 출력한다 -> %p
    printf("%d\n", *address); // 3
    return 0;
}