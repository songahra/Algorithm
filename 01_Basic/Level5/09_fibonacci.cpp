#include <stdio.h>

int n;
int fibo[50];

int main(){
  scanf("%d", &n);
  
  fibo[0] = 0;
  fibo[1] = 1;
  
  for(int i=2; i<=n; i++){
    fibo[i] = fibo[i-1] + fibo[i-2];
  }
  
  printf("%d", fibo[n]);
}