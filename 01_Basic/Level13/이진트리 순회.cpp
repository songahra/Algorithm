#include <stdio.h>

//5
//1 2 3
//2 4 5
//3 -1 -1
//4 -1 -1
//5 -1 -1

const int MAX = 100;

struct Tree{
    int left;
    int right;
};

Tree tree[MAX];

//tree[i] = 노드 i의 정보를 담고 있음
//tree[i].left = 노드i의 왼쪽 노드 번호
//tree[i].right = 노드 i의 오른쪽 노드 번호

void preorder(int x){
    //x를 루트로 하는 서브트리를 전위순회하여 출력하는 함수
    //preorder(2); ---> 2 4 5

    //기저조건 : 왼쪽과 오른쪽에 노드가 아무것도 없을 때
    //나 자신을 반환
    if(tree[x].left == -1 && tree[x].right == -1){
        printf("%d ", x);
    } else {
        //Root -> Left -> Right 전중후는 Root의 위치에 따라 나뉨

        printf("%d ", x);

        if(tree[x].left != -1) preorder(tree[x].left);  //내 왼쪽에 노드가 있으면 이제 왼쪽 노드가 root가 된다.

        if(tree[x].right != -1) preorder(tree[x].right);

    }
    
}

void inorder(int x){
    //x를 루트로 하는 서브트리를 중위순회하여 출력하는 함수
    //Left -> Root -> Right

    //기저 조건
    if(tree[x].left == -1 && tree[x].right == -1){
        printf("%d ", x);
    } else {
        // L --> Root --> R
        if(tree[x].left != -1) inorder(tree[x].left); // inorder(1) --> inorder(2) --> inorder(4)
        
        printf("%d ", x); //inorder(2) inorder(1)

        if(tree[x].right != -1) inorder(tree[x].right); // inorder(2) --> inorder(5) , inorder(1) --> inorder(3)
    }
}

void postorder(int x){
    //x를 루트로하는 서브트리를 후위순회하여 출력하는 함수
    //Left -> Right -> Root

    //기저조건
    if(tree[x].left == -1 && tree[x].right == -1){
        printf("%d ", x);
    } else {
        //L --> R --> Root
        if(tree[x].left != -1) postorder(tree[x].left);// postorder(1) --> postorder(2) --> postorder(4) print
                                                
        if(tree[x].right != -1) postorder(tree[x].right); //postorder(2) --> postorder(5)
                                                          //postorder(1) --> postorder(3)


        printf("%d ", x); //postorder(2) --> postorder(1) 
    }
}

int main(){
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        int a,b,c;

        scanf("%d%d%d",&a,&b,&c);

        tree[a].left = b;
        tree[a].right = c;
    }

    for(int i=1; i<=n; i++){ //노드 번호는 1부터 N까지 주어지니까 1부터 n까지 for문을 돌아서 출력해보기
        printf("%d : %d %d\n", i, tree[i].left, tree[i].right);
    }


    preorder(1);
    printf("\n");
    inorder(1);
    printf("\n");
    postorder(1);
    printf("\n");



    return 0;
}