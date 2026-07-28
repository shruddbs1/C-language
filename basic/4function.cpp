#include<stdio.h>

int hello(int a,int b){
    printf("%d$$$\n", a+b); //함수에 포함된 문장 출력
    return a-b;
}
int main(){
    printf("%d", hello(2,3)); //함수 반환값 출력
  
    return 0;
}