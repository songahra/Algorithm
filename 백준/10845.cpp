#include <stdio.h>
#include <queue>
#include <iostream>

using namespace std;

string str;
queue<int> q;
int d;

int main(){
    int num;
    cin >> num; //명령 횟수

    for(int i=0; i<num; i++){
        cin >> str;
        if(str == "push"){
            scanf("%d", &d);
            q.push(d);
        } else if(str == "pop"){
            if(q.size() == 0) printf("-1\n");
            else{
                printf("%d\n", q.front());
                q.pop();
            }
        } else if(str == "size"){ //큐에 있는 정수의 개수를 출력
            printf("%d\n", q.size());
        } else if(str == "empty"){ //큐가 비어있으면 1, 아니면 0을 출력
            printf("%d\n", q.empty());
        } else if(str == "front"){
            if(q.size() == 0) printf("-1\n");
            else printf("%d\n", q.front());
        } else if(str == "back"){
            if(q.size() == 0) printf("-1\n");
            else printf("%d\n",q.back());
        }
    } //end of for
    return 0;
}