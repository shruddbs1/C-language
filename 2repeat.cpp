#include<stdio.h>
int main(){
    printf("hello world");
    
//for 반복문
    for(int i=0; i<3;i++){
        printf("\n*");
    }
    int k=0;

//while 반복문
    while(k<3){
        
        printf("$\n", k++);
    }

// 피라미드 쌓기

    int f;
    scanf("%d", &f);
    for(int i =0;i<f;i++){
        for(int j=0;j<f-i;j++){
            printf(" ");
        }
        for(int g=0;g<i*2+1;g++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}