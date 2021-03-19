#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    long long n;
    cin >> n; //숫자카드의 개수
    map<long long ,int> m;

    while(n--){
        int num; //카드 정수
        cin >> num;
        int maxVal =0;

        if(m.find(num) == m.end()){
            //not found
            m.insert(make_pair(num, maxVal));
        } else {
            //found
        }
    }
    return 0;
}