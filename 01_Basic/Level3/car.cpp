#include <stdio.h>

int main() {
  int n, cnt = 0;
  //입력 받는 부분
  scanf("%d", &n);
  
  for(int i=0;i<5;i++){
    int car;
    scanf("%d", &car);
    if(car%10==n) cnt++;
  }
  printf("%d\n", cnt);
  return 0;
}