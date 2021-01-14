#include <stdio.h>

bool isNotContaining(int result[], int current, int finding){
     // result안에 i가 있는지 없는지 확인
    for(int i=0; i < current ; i++){
        if(result[i] == finding){
            return false; // 있다면 true
        }
    }
    return true; // 다 돌아도 없으니까 false
}

void getResult(int current, int n, int result[]){
    if(current >= n){
        for(int i=0; i < current; i++){
            printf("%d", result[i]);
        }
    printf("\n");
    } else {
        for(int i=1; i<=n; i++){
            if(isNotContaining(result, current, i)){
                result[current] = i; //현재 위치해 있는 for 에서 숫자 i를 등록
                getResult(current+1, n, result); //getR(2)가 다끝나고 왔다.
                result[current] = 0; //다시 0으로 초기화
            }
        } // for
    }
    
}

int main(){
    int n;
    int arr[5] = {0,};

    //입력 받는 부분
    scanf("%d",&n);
    getResult(0, n, arr);
    return 0;

}