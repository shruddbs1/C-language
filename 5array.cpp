#include<stdio.h>
int main (){
    int a[10];
    a[0] = 3;
    printf("%d", *(a+0));


    char A[100] = "안녕하세요";
    printf("\n%s", A);
     printf("\n%d",sizeof(A)); //문자열 길이

    return 0;
}