#include <stdio.h>

int main(){
    int n,s;
    //입력 받는 부분 
    scanf("%d %d", &n, &s);

    int space = n-1; //공백 갯수
    int number = 1; //출력해야되는 숫자의 갯수
    int previousFirst, previousLast; //이전 층의 첫번째 숫자

    for(int i=1; i<=n; i++){
        for(int j=0; j<space; j++) printf(" ");
        space--;

        if(i % 2 == 0){ //짝수 줄, 증가하면서 출력
            int currentFirst = previousFirst + 1;
            if(currentFirst >= 10) currentFirst = 1; //다시 1로 만들어줌

            for(int j=0; j<number; j++){
                printf("%d", currentFirst);
                previousLast = currentFirst;
                currentFirst += 1;
                if(currentFirst >= 10) currentFirst = 1;
            }
        }
        else { //홀수 줄, 감소하면서 출력
            int currentFirst = previousLast;
            for(int j=0; i < number; j++){
                currentFirst += 1;
                if(currentFirst >= 10) currentFirst = 1;
            }

            previousFirst = currentFirst;

            for(int j=0; j < number; j++){
                printf("%d" , currentFirst);
                currentFirst -= 1;
                if(currentFirst <= 0 ) currentFirst = 9;
            }
        }
        //(1)공백을 출력 처음에는 n-1 공백이 들어간다.
        //(2)숫자들을 출력
        number += 2;
        printf("\n");
    }
    return 0;
}