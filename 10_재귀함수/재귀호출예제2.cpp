#include <stdio.h>


bool isNotContaining(int result[], int i, int n){
     // result안에 i가 있는지 없는지 확인, n은 result 길이
    bool flag = true;

    for(int j=0; j < n ; j++){
        //result안에 i가 있다면 flag를 false로
        if(result[j] == i){
            flag = false;
        }
    }
    return flag;
}

void getResult(int current, int n, int result[]){
    if(current >= n){
        for(int i=0; i<current; i++){
            printf("%d", result[i]);
        }
      printf("\n");
    } else {
        for(int i=1; i<=n; i++){
            if(isNotContaining(result, i, n)){
                result[current] = i; //현재 위치해 있는 for 에서 숫자 i를 등록
                getResult(current+1, n, result); //getR(2)가 다끝나고 왔다.
                result[current] = 0; //다시 0으로 초기화
            }
    }
}

}
int main() {
    int n;
    int arr[5] = {0,};

    //입력 받는 부분
    scanf("%d",&n);
    getResult(0, n, arr);
    return 0;
}