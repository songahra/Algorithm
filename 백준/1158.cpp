#include <string>
#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n,k;
    queue<int> q;

    cin>>n>>k;
    cout << "<";
    
    for(int i=1; i<=n; i++){
        q.push(i); //큐에 N까지의 수 차례로 넣어주기
    }

    while(!q.empty()){ //N명의 사람이 모두 제거될 때까지, 즉 큐가 빌 때까지 반복
        for(int j=0; j<k-1; j++){ //K번째를 제거하기 위한 루프
            q.push(q.front()); //q뒤에 k번째 전까지 붙이기
            q.pop();
        }
        cout << q.front();
        q.pop();
        if(!q.empty()) cout <<",";
    }
        cout<<">";
    return 0;
}