#include <stdio.h>

int main() {
  int n, s = 1;
  scanf("%d", &n);
  for(int i=1; i<=n; i++){
    int tmp = s;
    for(int j=i;j<=n;j++){
      printf("%d ", tmp);
      tmp += j;
    }
    s+= i+1;
    printf("\n");
  }
  return 0;
}