#include <stdio.h>

int binarySearch(int arr[], int start, int end, int value){
    //정렬된 arr의 start부터 end까지의 값 중에서
    //value가 존재한다면 그 위치를 반환하고
    //그렇지 않다면, -1을 반환하는 함수

    //기저조건
    //숫자가 존재하지 않으면 value가 존재하지 않는다.
    if(start > end) {
        return -1;
    }
    else if(start == end){ //숫자가 하나 있으면
        if(arr[start] ==  value) return start; //value와 start를 비교해서 같으면 start를 반환하고 
        else return -1; //같지 않으면 -1을 반환
    } else { //숫자가 여러개 있는 경우
        // 1 2 6 9 10 11 15 19 30

        int mid = (start + end) / 2;
        //중간 위치에 있는 값이랑 value를 비교
        if(arr[mid] == value) return mid;  //같으면 위치를 반환
        else if(arr[mid] > value) return binarySearch(arr, start, mid-1, value); //왼쪽에서 찾아라
        else return binarySearch(arr, mid+1, end, value);   //오른쪽에서 찾아라
    }


}

int main(){

    int n,m;
    int arr[100];

    // 입력받는 부분
    scanf("%d", &n);
    //arr은 정렬이 되어있어야 함.
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d", &m);

    int inx = binarySearch(arr, 0, n-1, m); //arr의 0부터 n-1번째 중에서 m을 찾는다.
    
    if(inx == -1){
    printf("수가 없습니다.\n"); // inx = -1이면 숫자가 없다. 못 찾았다
    } else { 
        printf("%d번째에 숫자가 있습니다.\n", inx);
    }
    return 0;
}