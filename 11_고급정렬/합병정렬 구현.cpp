//합병정렬 구하기
#include <stdio.h>

void merging(int arr[], int s1, int e1, int s2, int e2){
    //arr의 s1~e1의 왼쪽 절반 , s2~e2의 오른쪽 절반일 때,
    //이 둘을 합쳐서 arr의 s1~e2를 정렬된 결과로 만드는 함수

    // 1 2 4 8 | 3 4 6 7
    // p         q
    // 1 2 3 4 4 6 7 8
    // temp라는 배열을 만들어서 결과를 업데이트하고 마지막에 temp에 있는 값을 arr에 붙여넣는다.

    int p, q; //p와 q의 현재 최솟값을 가리키는 변수들
    int tmp[100]; //합쳐진 결과를 저장하는 임시 변수
    int tmp_inx = 0;

    p = s1; //왼쪽 절반의 최솟값
    q = s2; //오른쪽 절반의 최솟값

    while(p <= e1 && q <= e2){ //p랑 q가 둘 다 범위안에 있을 때만 비교
        if(arr[p] <= arr[q]){
            //p가 가리키는 값을 tmp에 넣는다.
            tmp[tmp_inx++] = arr[p]; //값이 차곡차곡 쌓이 도록 tmp에 넣는다.
            p++;
        } else {
            tmp[tmp_inx++] = arr[q];
            q++;
        }
    }// end of while
    
    //둘 중에 하나가 범위 밖에 있다면 
    
    //1 2 3 3  1 2 7 8
    //       p     q
    // 1 1 2 2 3 3 [7 8] -> 7과 8을 tmp에 담아야 한다.
  
    if(p > e1){ // p가 범위 밖에 있다면, 오른쪽 절반에 남아있는 q 의 값을 tmp에 넣고
        for(int i=q; i <= e2 ; i++){
            tmp[tmp_inx++] = arr[i];
        }
    } else { //q가 범위 밖에 있다면, 왼쪽 절반에 남아있는 p의 값을 tmp에 넣는다.
        for(int i=p; i <= e1; i++){
                tmp[tmp_inx++] = arr[i];
        } 
    }

    //tmp는 완성이 되었으니
    //arr[s1~e2]까지에 tmp의 값을 복사
    for(int i=s1; i<=e2; i++){
        arr[i] = tmp[i-s1]; //tmp는 0부터 시작하기 때문에 i-s1
    }
}


void mergeSort(int arr[], int start, int end){
    //arr의 start부터 end까지를 합병정렬하는
    //함수

    //숫자가 하나 있을 때는 아무것도 안해도 된다.
    if(start >= end){  //기저 조건
        return;
    } else {
        //1. 왼쪽 절반을 합병정렬
        //2. 오른쪽 절반을 합병정렬
        //3. 그 둘을 합친다.

        //숫자가 여러개 일 경우 중간을 잡고
        //왼쪽 절반 정렬하고, 오른쪽 절반 정렬하고
        int mid = (start+end) / 2; //절반 위치
        printf("mid ? : %d\n", mid);

        mergeSort(arr, start, mid); //arr을 start ~ mid까지 합병정렬 (왼쪽 정렬)
        mergeSort(arr, mid+1, end); //arr을 mid+1 ~ end까지 합병정렬 (오른쪽 정렬)

        //arr[start~mid], arr[mid+1~end]는 정렬이 이미 되어있음
        merging(arr, start, mid, mid+1, end); // 
    }
}


int main(){

    int n;
    int numbers[100]; 
    //입력받는 부분
    scanf("%d", &n);
    //정렬하려는 숫자 입력받는 부분
    for(int i=0; i<n; i++) scanf("%d", &numbers[i]);
    //정렬
    mergeSort(numbers, 0, n-1);
    
    for(int i=0; i<n; i++){
        printf("%d ",numbers[i]);
    }
    printf("\n");

    return 0;



}