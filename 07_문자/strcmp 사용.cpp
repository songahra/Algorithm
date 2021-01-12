//strcmp 사용
#include <stdio.h>
#include <string.h>

int main(){
    char A[100], B[100];

    scanf("%s", A);
    scanf("%s", B);

    if(strcmp(A,B) == 0) printf("Same\n");
    else printf("Different\n");
    
    return 0;
}