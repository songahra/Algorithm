#include <stdio.h>
//비재귀 호출

int binarySearch(int arr[], int myStart, int myEnd, int value){
    //arr의 myStart부터 myEnd까지 중에서
    //value를 찾아 그 위치를 반환하는 함수
    //만약 없다면, -1을 반환한다.

    int start, end;
    int mid;

    //start : value보다 작은 값을 가리킴
    //end: value보다 항상 큰 값을 가리킴
    
    if(arr[myStart] > value) return -1; // value = -3인 경우 
    if(arr[myStart] == value) return myStart;

    if(arr[myEnd] < value) return -1; //value = 50인 겨우 
    if(arr[myEnd] == value) return myEnd;

    //위의 조건에 걸리지 않으면 start보다 크고, end보다는 작다

    start = myStart;
    end = myEnd;

    
    //value : 29
    //1 4 7 10 19 22 24 27 39
    //s                    e

    //while("비교할 숫자가 있다면")
    //1 4 7 10 19 22 24 27 39
    //                  s  e

    //value : 10 , mid : 19 -> arr[mid] > value
    //1 4 7 10 19 22 24 27 39
    //s                    e -> e한테 mid를 주면 된다.

    //value : 29 , mid : 19 -> arr[mid] < value
    //1 4 7 10 19 22 24 27 39
    //s                    e -> s한테 mid를 주면 된다.

    while(start+1 < end){ //이게 false라면 s와 e가 붙어있다
         mid = (start + end) / 2;

         if(arr[mid] == value) return mid; //위치를 반환한다
         else if(arr[mid] > value) end = mid;
         else start = mid;
    }

    // start / end가 붙어 있는 상태 = 찾고 싶은 값이 없는 상태이다.
    return -1;
}
int main(){
    int n, m;
    int arr[100];
    //입력 받는 부분
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d",&m);

    int inx = binarySearch(arr, 0, n-1, m);

    if(inx == -1) printf("수를 찾을 수 없습니다.");
    else printf("%d번째에 있습니다.\n", inx);


    return 0;
}