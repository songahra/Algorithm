/**
 * About
 *
 * Author: songahra@GitHub <2041420@naver.com>
 * Date  : 2020-12-29
 * URL   : 
 *
 */

#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b,&c);

    if(a >= b && a >= c) printf("%d\n", a);
    else if(b >= a && b >= c) printf("%d\n", b);
    else printf("%d",c);

    return 0;

}
