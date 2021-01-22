#include <stdio.h>

//myPQ.push(x)
//myPQ.pop()
//myPQ.top()

const int MAX = 100;
struct priorityQueue{
    int data[MAX];
    int len = 0;

     void push(int x){
         data[len++] = x; //뒤에다 붙인다.
     }

     void pop(){
         //1. 우선순위가 가장 높은 원소를 찾는다.
         //2. 그 원소를 제거하고, 뒤의 원소를 앞으로 당긴다.

        int myMax = -987987987, myMaxInx = -1;
        for(int i=0; i<len; i++){
            if(data[i] > myMax){
                myMax = data[i]; //값을 넣어준다.
                myMaxInx = i; //위치를 넣어준다
            }
        }
        
        //뒤에 있는 원소들을 앞으로 당긴다.
        //myMaxInx의 자리에 있는 원소가 없어진다.
        for(int i=myMaxInx; i<len; i++){
            data[i] = data[i+1];
        }
        len--; //원소 하나 없어졌으니까 len을 하나 감소

     }

    
     int top(){
         //우선순위가 높은 원소를 반환
         int myMax = -987987987;

         for(int i=0;i<len;i++){
             if(data[i] > myMax){
                 myMax = data[i];
             }
         }
         return myMax;
     }

};

int main(){

    return 0;
}