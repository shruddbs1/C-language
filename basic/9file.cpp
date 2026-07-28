#include<stdio.h>
#define MAX 10000 //define 상수나 간단한 식 치환 (typedef는 자료형이나 구조체 치환)

int main (){
    //fputs, fgets
    //파일 쓰기

    char line[MAX];
    /*FILE *file = fopen("test1.txt", "wb");
    if(file==NULL){
        printf("파일열기 실패");
        return 0;
    }
    fputs("fputs이용해서 작성\n", file);
    fputs("잘 적혔는지 확인\n", file);

    fclose(file);*/

    //파일 읽기
    FILE *file = fopen("test1.txt", "rb");
    if(file==NULL){
        printf("파일열기 실패");
        return 0;
    }

    while(fgets(line, MAX, file) != NULL){
        printf("%s", line);
    }

    fclose(file);

    return 0;
}