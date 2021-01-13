#include <stdio.h>


void printSpace(int n){
    //공백을 n개 출력한다
    for(int i=0; i<n; i++){
        printf(" ");
    } 
}

void printStar(int n){
    //*을 n개 출력한다.
    for(int i=0; i<n; i++){
        printf("*");
    }
}

void printNewLine(){
    //줄을 띄운다.
    printf("\n");    
}

int main(){
    /*
      n=4
        *
       **
      ***
     ****  
    */
   int n;
   scanf("%d", &n);
   for(int i=0; i<n; i++){
       //공백 출력
       printSpace(n-i-1);
       //별 출력
       printStar(i+1);
       //한 줄 띄우기
       printNewLine();
   }
    return 0;
}