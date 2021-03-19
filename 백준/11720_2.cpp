#include <string>
#include <iostream>

using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    string t;
    cin >> t;

    for(int i=0; i<n; i++){
        string tmp;
        tmp = t[i];
        sum += stoi(tmp);
    }

    cout << sum;
}