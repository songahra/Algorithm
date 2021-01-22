/**
 * About
 *
 * Author: songahra@GitHub <2041420@naver.com>
 * Date  : 2020-12-29
 * URL   : 도A , 개B, 걸C, 윷D , 모E
 *
 */

#include <stdio.h>

int main(){
    //1. 윷의 상태를 입력받는다.
    //2. 배의 갯수와 등의 갯수를 구한다.
    //3. 배의 갯수와 등의 갯수에 대해서 결과를 출력한다.


    int a, b, c, d; //윷의 상태
    int first, second; 

    scanf("%d %d %d %d", &a, &b, &c, &d);

    first = 0; //배의 개수
    second = 0; //등의 개수

    if(a == 0) first++;
    if(b == 0) first++;
    if(c == 0) first++;
    if(d == 0) first++;

    if(a == 1) second++;
    if(b == 1) second++;
    if(c == 1) second++;
    if(d == 1) second++;

    if(first == 1 && second == 3) printf("A\n");
    else if(first == 2 && second == 2) printf("B\n");
    else if(first == 3 && second == 1) printf("C\n");
    else if(first == 4) printf("D\n");
    else if(second == 4) printf("E\n");

       scanf("%d %d %d %d", &a, &b, &c, &d);

    first = 0; //배의 개수
    second = 0; //등의 개수

    if(a == 0) first++;
    if(b == 0) first++;
    if(c == 0) first++;
    if(d == 0) first++;

    if(a == 1) second++;
    if(b == 1) second++;
    if(c == 1) second++;
    if(d == 1) second++;

    if(first == 1 && second == 3) printf("A\n");
    else if(first == 2 && second == 2) printf("B\n");
    else if(first == 3 && second == 1) printf("C\n");
    else if(first == 4) printf("D\n");
    else if(second == 4) printf("E\n");

        scanf("%d %d %d %d", &a, &b, &c, &d);

    first = 0; //배의 개수
    second = 0; //등의 개수

    if(a == 0) first++;
    if(b == 0) first++;
    if(c == 0) first++;
    if(d == 0) first++;

    if(a == 1) second++;
    if(b == 1) second++;
    if(c == 1) second++;
    if(d == 1) second++;

    if(first == 1 && second == 3) printf("A\n");
    else if(first == 2 && second == 2) printf("B\n");
    else if(first == 3 && second == 1) printf("C\n");
    else if(first == 4) printf("D\n");
    else if(second == 4) printf("E\n");

    return 0;
}
