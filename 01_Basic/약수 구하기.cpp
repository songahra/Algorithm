#include <stdio.h>

int main(){

    int n, k;
    int cnt = 0;
    int flag = 0;

    scanf("%d %d", &n, &k);

    for(int i=1; i<= n ; i++){
        if(n % i == 0){
            cnt ++;

            //i는 cnt번째로 작은 약수이다.

            if(cnt == k){
                printf("%d\n", i);
                flag = 1;
            } 
            
        }
    }
    if(flag == 0){
        printf("0\n");
        
    }
    return 0;
}