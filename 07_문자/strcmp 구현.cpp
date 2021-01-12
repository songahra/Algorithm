//strcmp

#include <stdio.h>
#include <string.h>

int main(){
    char A[100], B[100];
    //문자열 입력 받는 부분
    scanf("%s", A); //&붙이면 안된다.
    scanf("%s", B);

    //길이가 똑같은지
    //문자열이 똑같은지
    int lenA, lenB;
    lenA = strlen(A);
    lenB = strlen(B);

    if(lenA == lenB){
        bool flag = false;

        for(int i=0; i < lenA; i++){
            if(A[i] != B[i]){
                flag = true;
            }
        }
        
        if(flag == true) printf("Different!\n");
        else printf("Same\n");

    }else{
        printf("Different!\n");
    }


    return 0;
}