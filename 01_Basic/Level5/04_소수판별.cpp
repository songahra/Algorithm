//소수판별 YES / NO
#include <stdio.h>

int main()
{   
    bool flag = false;
    //flag가 true면, 소수가 아니라는 말
    //flag가 false면, 소수라는 말
    int n;
    //입력 받는 부분
    scanf("%d", &n);

    for(int i=2; i<= n-1; i++){
        if(n % i == 0) flag = true;
    }
    
    if(flag == true) printf("NO\n");
    else printf("YES\n");
    return 0;
}