#include <stdio.h>
        // n번 훑겠다

        // 1 7 10 8 3 2 9 7 3 8 4 |
        //                    j 0~9까지
        // 1 7 8 3 2 9 7 3 8 4 | 10
        //                 j 0~8까지
        // 숫자 11개
        // i=0 --> j = 0 ~ 9
        // i=1 --> j = 0 ~ 8
        // i=2 --> j = 0 ~ 7
        // j= 0 ~ n-i-2
        // for(int j=0; j<=n-i-2; j++)

int main() {
    // int i, j;
    int N;
    int arr[100];
    int temp;
    
    scanf("%d", &N);
    
    for(int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<N-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1]; 
                arr[j+1] = temp;
            }
        }
    }
    
    for(int i=0; i<N; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    return 0;
}