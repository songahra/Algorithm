#include <string>
#include <iostream>
#include <stack>

using namespace std;

int n; //명령 횟수
string str; //명령어
int d;
stack<int> s;

int main(){
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> str;
        if(str == "push"){
            cin >> d;
            s.push(d);
        } else if(str == "pop"){
            if(s.size() == 0) printf("-1\n");
            else {
            printf("%d\n", s.top());
            s.pop();
            }
        } else if(str == "size"){
            printf("%d\n", s.size());
        } else if(str == "empty"){
            printf("%d\n", s.empty());
        } else if(str == "top"){
            if(s.size() == 0) printf("-1\n");
            else printf("%d\n", s.top());
        }
    }
    return 0;
}