#include <stdio.h>

int main(){
  int n, arr[1050];
  //입력받는 부분
  scanf("%d", &n);
  for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
  }
  
  for(int i=n-1; i>=0; i--){
    printf("%d ", arr[i]);
  }
  
  return 0;
}