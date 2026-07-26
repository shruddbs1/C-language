#include<stdio.h>

void swap(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void change(int * ar){
    ar[2] = 30; //값 바꿀때 *사용x
}


int main (){
    int a = 100;
    int b = 200;
    
    swap(&a, &b);
    printf("%d %d", a, b);

    int arr[3] = {1, 2, 3};
    change(arr); //arr자체가 주소값
    change(&arr[0]); // ==arr 배열은 위치값 주소를 보내도 연결됨
    printf("\n\n%d %d %d", arr[0], arr[1], arr[2]);




    return 0;
}