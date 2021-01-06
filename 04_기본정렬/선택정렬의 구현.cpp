#include <stdio.h>

int main(){
    /*
    10
    1 5 6 8 3 4 5 9 2 10 [ 입력 ]
    ----
    1 2 3 4 5  5 6 8 9 10 [ 출력 ]
    */

   int n; //숫자의 갯수
   int data[100]; //숫자를 담을 배열

   //입력 받는 부분
   scanf("%d", &n);

   for(int i=0; i<n; i++){
       scanf("%d", &data[i]);
   }

    for(int i=0; i<n; i++){
        // 이제 i번째에 최솟값을 넣어라
        // i번째 부터 맨 끝까지의 값 중 최솟값을 넣는다. (전체 배열의 최솟값 X)
        // i 왼쪽은 다 정렬이 되어있으니까

        //       i       
        // 1 2 | 6  4 8 3  2  10
        //      inx
        //              j
        //i가 가르키는 값과 inx의 값을 바꿔야하니까 최소값의 위치를 알아야한다.
        //
        int inx = i; //i 부터 끝까지의 최솟값

        for(int j=i; j<n; j++){
            if(data[inx] > data[j]){
                inx = j;
            }
        } //최소값을 구하는 부분 j가 i부터 n까지 돌면서 j가 가르키고 있는게 작으면
        //inx를 바꿔준다.

        int temp;
        temp = data[i];
        data[i] = data[inx];
        data[inx] = temp;

        // for(int i=0; i<n; i++){
        //     printf("%d ", data[i]);
        // }

        // printf("\n");

    } // 

    for(int i=0; i<n;i++)
    printf("%d ", data[i]);
    printf("\n");
    return 0;
}