#include <stdio.h>
int main(){
    int n;
    int data[9];
    int min;
    int min2;
    int num;

    //입력 받는 부분
    for(int i=0; i < 8; i++){
        scanf("%d\n", &data[i]);
    }

       min = data[0];
       min2 = data[1];

    for(int i = 2; i < 9; i++){
       if(data[i] < min){
           min2 = min;
           min = data[i];
       }else if(data[i] < min2){
           min2 = data[i];
           num = i;
       }
    }
    printf("%d\n%d", min2, num+1);
    return 0;


    
}