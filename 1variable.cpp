#include<stdio.h>
int main (){
    printf("hello world");
    
//문자열 입력과 출력
    char b[10]; //문자열 끝에 끝문자 포함하므로 문자길이 +1만큼의 길이 필요
    scanf("%s", b);
    printf("\n%s", b);

    return 0;
}