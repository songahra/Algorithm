#include <stdio.h>
#define MAX 20050

int main() {
  int n, m;
  //입력받는 부분
  scanf("%d%d", &n, &m);
  
  if(n==1) n++;
  
  for(int i=n; i<=m; i++){
    bool flag = false;
    for(int j=2; j<i; j++){
      if(i%j == 0){ //짝수라면 falg = true
        flag = true;
        break;
      }
    }
    if(!flag) printf("%d ", i);  //flag = false를 true로
  } // 
  return 0;
}