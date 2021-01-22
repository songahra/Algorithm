#include <stdio.h>


 int getLeft(int arr[], int start, int end, int pivot, int result[]){
     //arr의 start 부터 end까지 숫자들 중에서
     //pivot보다 작거나 같은 값을 result에 채우는 함수
     //또한, 작거나 같은 원소의 갯수를 반환
    // 1 5 7 2 8 3 4
    // s       e     pivot = 3
    // result = [1,2]
    int inx=0;

    for(int i=start; i<=end; i++){
        if(arr[i] <= pivot) result[inx++] = arr[i];
    }

    return inx;
 }

 int getRight(int arr[], int start, int end, int pivot, int result[]){
     //arr의 start부터 end까지 숫자들 중에서
     //pivot보다 큰 값을 result에 채우는 함수
     //또 한, 큰 값의 원소 갯수를 반환

     int inx=0;

     for(int i=start; i<=end; i++){
         if(arr[i] > pivot) result[inx++] = arr[i];
     }

    return inx;
 }

void quickSort(int arr[], int start, int end){
    //arr을 start부터 end까지 퀵정렬 하는 함수

    if(start >= end){ //숫자가 하나밖에 없거나 아무것도 없으면 그 자체로 이미 정렬 되어있는 상태이기 때문에 그냥 나가면 된다.
        return;
    }
    //1. 맨 처음에 있는 값을 pivot을 정한다. 
    // 2 5 7 3 1 8 4 7
    //       s   e
    int pivot = arr[start]; // arr[0]이 아님! start 부터 end까지 정렬하는 거니까 첫번째 값은 arr[start]
    //2. 작거나 같은 값과 큰 값으로 분류한다.
    int left[100], right[100];

    int left_cnt = getLeft(arr, start+1, end, pivot, left); //pivot빼고 나머지들 중에서 작거나 같은 값을 left에 넣어야 한다.
    int right_cnt = getRight(arr, start+1, end, pivot, right); //pivot보다 큰 값들을 right에 넣어야 한다.

    //left, right 를 붙여서 pivot을 붙인다.
    //4 8 2 2 1 7 6 2 3 
    //pivot = 4
    //left = 2 2 1 2 3 
    //right = 8 7 6

    //left 붙이고 pivot 붙이고 right붙이면 된다.
    //arr -> 2 2 1 2 3 4 
    //       s

    for(int i=0; i < left_cnt; i++){
        arr[start+1] = left[i];
    }

    arr[start+left_cnt] = pivot;

    for(int i=0; i < right_cnt; i++){
        arr[start+left_cnt+1+i] = right[i]; 
    }

    quickSort(arr, start, start+left_cnt-1);
    quickSort(arr, start+left_cnt+1, end);

}


int main(){
    int n;
    int arr[100];

    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}