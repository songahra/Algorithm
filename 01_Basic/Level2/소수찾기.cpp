#include <stdio.h>

int main() {
  int n;
  int cnt = 0;
  //입력받는 부분
  scanf("%d", &n);
  
  if(n==1) n++;
  
  for(int i=2; i<=n; i++){
    bool flag = false;
    for(int j=2; j<i; j++){
      if(i%j == 0){ //짝수라면 falg = true
        flag = true;
        break;
      }
    }
    if(!flag){
        cnt ++;
        printf("%d ", i);  //flag = false를 true로
    } 
  } // 
  printf("%d", cnt);
  return 0;
}