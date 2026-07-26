#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    srand(time(NULL));//난수 초기화
    
    for(int i=0; i<3;i++){
        
        printf("%d", rand() % 10+1);// 1~10까지 랜덤숫자 출력

    }
   
    int num = rand() % 3;
    printf("\n%d\n", num);
    switch(num){//switch 대상이 될 변수 입력
        case 0:printf("\n0을 뽑음");break; //대상위 값에 따른 이벤트 실행
        case 1:printf("\n1을 뽑음");break;
        case 2:printf("\n2을 뽑음");break;
        default: printf("\n mmmmm");break;
    }

    
    return 0;
}