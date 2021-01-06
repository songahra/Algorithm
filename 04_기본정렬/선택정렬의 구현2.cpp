#include <stdio.h>

int main(){
     /*
    10
    1 5 6 8 3 4 5 9 2 10 [ 입력 ]
    ----
    1 2 3 4 5 5 6 8 9 10 [ 출력 ]
    */
   int n;
   int data[100];
   //입력 받는 부분
   scanf("%d", &n);
   for(int i=0; i<n; i++){
        scanf("%d", &data[i]);
   }

   for(int i=0; i<n; i++){
       //i = 가장 최솟값
       int inx = i;
       //i부터 끝까지의 최솟값
       for(int j=i; j<n; j++){
           if(data[inx] > data[j]){
               inx = j;
           }
       }
       // 
       int temp;
       temp = data[i];
       data[i] = data[inx];
       data[inx] = temp;
    
    for(int i=0; i<n; i++){
        printf("%d", data[i]);
    }
    printf("\n");

   }
    return 0;
}