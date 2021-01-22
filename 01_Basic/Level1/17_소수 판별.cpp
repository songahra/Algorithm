#include <stdio.h>

int main(){
    int n;
    int cnt = 0;
    //입력받는 부분
    scanf("%d", &n);

    int flag = 0;

    for(int i=2; i<= n-1 ; i++){
        if(n % i == 0){
            flag = 1;
        } 
    }

    if(flag == 0) printf("YES\n");
    else printf("NO\n");
    
    return 0;
}

// #include <stdio.h>

// int main() {
//   int n;
//   scanf("%d", &n);
//   for(int i=2;i<n;i++){
//     if(!(n%i)){
//       printf("NO");
//       return 0;
//     }
//   }
//   printf("YES");
//   return 0;
// }