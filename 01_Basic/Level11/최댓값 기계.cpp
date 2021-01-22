#include <stdio.h>

struct maxMachine{
    int data[100];
    int len = 0; //데이터 배열의 맨 끝을 가리킨다.
    void insertNumber(int x){
        data[len++] = x;
    }
    void removeNumber(int x){
        //          i 
        //  0 1 2 3 4 5 6 7 8 9
        //d 1 2 8 7 5 3 6 2 3 4
        //d 1 2 8 7 3 6 2 3 4 0 
        for(int i=0; i<len; i++){
            if(data[i] == x){
                for(int j=i; j<len; j++){
                    data[j] = data[j+1];
                }
                len --;
                return; //한번 지웠으면 끝이니까
            }
        }
    }
    int getMax(){
        int myMax = -1;

        for(int i=0; i<len; i++){
            if(data[i]> myMax){
                myMax = data[i];
            }
        }
        return myMax;
    }
    
};


int main(){
    //구조체는 캡슐화를 구현하기 위한 문법.
    //구조체는 타입을 정의하는 것이다.

    //maxMachine도 자료 구조
    //struct를 이용하여 maxMachine이라는 자료구조를 "정의"
    //maxMachine이라는 자료구조 m1을 "선언"

    //maxMachine <- 타입, struct, class(c++)
    //m1,m2 <- 변수, 인스턴스(instance) 개체, 실체가 있는 뭔가, m1이라는 주머니가 있음
    //maxMachine이라는 설명서가 있고 그 설명서대로 동작하는 실체가 있는 struct의 인스턴스 m1

    maxMachine m1;
    m1.insertNumber(10);
    m1.insertNumber(20);
    m1.insertNumber(5);
    m1.insertNumber(30);

    printf("%d\n", m1.getMax()); // 30

    m1.removeNumber(30);
    m1.removeNumber(10);

    printf("%d\n", m1.getMax()); // 20

    m1.removeNumber(20);
    printf("%d\n", m1.getMax()); // 5



    return 0;
}