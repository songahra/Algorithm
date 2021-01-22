//            i  
//  1 2 4 5 | 2 8 8 3 2 
//            j    
// 지금 i가 가리키고 있는 값이 왼쪽으로 들어가야 함.
// 단, i왼쪽의 모든 원소는 정렬이 되어 있음.

#include <stdio.h>

int main(){
    int n, data[100];

    //입력 받는 부분
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &data[i]);
    }

    for(int i=0; i<n; i++){
        //i가 가르키고 있는 값을 넣어야 한다.
        //단, i왼쪽은 모두 정렬이 되어 있다.

        for(int j=i;j>=1;j--){
            if(data[j-1] > data[j]){

                int temp;
                temp = data[j-1];
                data[j-1] = data[j];
                data[j] = temp;

            }
            else break; //더 이상 비교 X
        } // 

        for(int i=0; i<n; i++){
        printf("%d ", data[i]);
    }
    printf("\n");

    }

    // 결과 확인
    // for(int i=0; i<n; i++){
    //     printf("%d ", data[i]);
    // }

    return 0;
}