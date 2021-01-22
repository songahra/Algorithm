#include <stdio.h>

struct Point{
    int x, y;

    int getSum(){
        return x+y;
    }
};

int main(){
    Point p1, p2;
    
    p1.x =1;
    p1.y=2;

    p2.x=3;
    p2.y=4;

    printf("%d\n", p1.getSum());
    printf("%d\n", p2.getSum());
    
}