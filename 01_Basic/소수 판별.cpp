#include <stdio.h>

int main(){
    int n;
    int cnt = 0;
    scanf("%d", &n);
    for(int i = 1 ; i <= n ; i++){
        if(n % i == 0){
            cnt++;
        }
    }
    if( cnt == 2 ){
        printf("Yes");
    }else{
        printf("NO");
    }
    return 0;
}