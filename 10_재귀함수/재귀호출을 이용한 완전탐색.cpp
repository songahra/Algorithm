#include <stdio.h>

const int MAX = 105;

int n, r;
char result[MAX];
bool check[MAX]; // check[i] == true --> 알파벳 i가 이미 나왔음 초기값 0 , 0이 아닌 모든 수는 참

void getResult(int x){
    //x 번째 for문을 돌려야 함
    if(x >= r){
        printf("%s\n", result); //result안에 있는 문자열을 출력
    } else {
        for(int i=0; i<n; i++){ //n=3이면 abc 이렇게 값이 3개여야 하니까 n까지
            char alpha = i + 'a';
            if(check[i] == false){ //flase라면 알파벳이 나오지 않았다
                result[x] = alpha;
                check[i] = true; //이미 들어가 있으니까 true로 변환
                getResult(x+1); // 다음 for문을 실행 시키러 간다.
                // x번째에 i를 넣는 모든 경우를 이미 다 고려 했음
                // x번째에 알파벳 i를 넣고 true로 만들어줌
                // result[0] = 'a'; 다했고 이제 result[0] = 'b'넣을 차례
                check[i] = false;
                result[x] = 0;
            }
        }
    }
}

int main(){
    //입력 받는 부분
    scanf("%d %d", &n, &r);
    
    getResult(0);

    return 0; 
}