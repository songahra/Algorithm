#include <stdio.h>

int main() {
  int n, m, s = 1;
  scanf("%d%d", &n, &m);
  for(int i=0; i<n; i++){

    for(int j=0;j<m;j++){
      printf("%d ", s++);
    }
    
    printf("\n");
  }
  return 0;
}