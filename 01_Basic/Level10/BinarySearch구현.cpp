#include <stdio.h>

int binarySearch(int arr[], int start, int end, int value){
    //���ĵ� arr�� start���� end������ �� �߿���
    //value�� �����Ѵٸ� �� ��ġ�� ��ȯ�ϰ�
    //�׷��� �ʴٸ�, -1�� ��ȯ�ϴ� �Լ�

    //��������
    //���ڰ� �������� ������ value�� �������� �ʴ´�.
    if(start > end) {
        return -1;
    }
    else if(start == end){ //���ڰ� �ϳ� ������
        if(arr[start] ==  value) return start; //value�� start�� ���ؼ� ������ start�� ��ȯ�ϰ� 
        else return -1; //���� ������ -1�� ��ȯ
    } else { //���ڰ� ������ �ִ� ���
        // 1 2 6 9 10 11 15 19 30

        int mid = (start + end) / 2;
        //�߰� ��ġ�� �ִ� ���̶� value�� ��
        if(arr[mid] == value) return mid;  //������ ��ġ�� ��ȯ
        else if(arr[mid] > value) return binarySearch(arr, start, mid-1, value); //���ʿ��� ã�ƶ�
        else return binarySearch(arr, mid+1, end, value);   //�����ʿ��� ã�ƶ�
    }


}

int main(){

    int n,m;
    int arr[100];

    // �Է¹޴� �κ�
    scanf("%d", &n);
    //arr�� ������ �Ǿ��־�� ��.
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d", &m);

    int inx = binarySearch(arr, 0, n-1, m); //arr�� 0���� n-1��° �߿��� m�� ã�´�.
    
    if(inx == -1){
    printf("���� �����ϴ�.\n"); // inx = -1�̸� ���ڰ� ����. �� ã�Ҵ�
    } else { 
        printf("%d��°�� ���ڰ� �ֽ��ϴ�.\n", inx);
    }
    return 0;
}