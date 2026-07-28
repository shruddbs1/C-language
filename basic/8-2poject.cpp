#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct game{
    char *name;
    int age;
    char *hobby;
}; //뒤에 세미콜론 필요

void catinfo(int num){
    struct game cat[5] = {{"야옹이", 3, "놀기"}, {"실냥이", 4, "실뜨기"}, {"누룽지", 5, "밥먹기"}, {"치즈냥이", 6, "눕기"}, {"후추", 7, "자기"}};
    printf("\n이름: %s, 나이: %d, 취미: %s\n", cat[num].name, cat[num].age, cat[num].hobby);
}

int main (){
    
    int count[5] = {0, 0, 0, 0, 0};
    srand(time(NULL));

    while(1){
        printf("===현재 뽑은 고양이 수===\n");
     printf("1번 고양이: %d \n", count[0]);
     printf("2번 고양이: %d \n", count[1]);
     printf("3번 고양이: %d \n", count[2]);
     printf("4번 고양이: %d \n", count[3]);
     printf("5번 고양이: %d \n", count[4]);
     printf("고양이를 뽑았습니다.\n");
     int num = rand() %5;
     switch(num){
         case 0:{
             count[0]+=1;
             catinfo(num);
             break;
            
         }
         case 1:{
             count[1]+=1;
             catinfo(num);
             break;
         }
         case 2:{
             count[2]+=1;
             catinfo(num);
             break;
         }
         case 3:{
             count[3]+=1;
             catinfo(num);
             break;
         }
         case 4:{
             count[4]+=1;
             catinfo(num);
             break;
         }
     }
     int start;
     scanf("%d", &start);
     if(start == 1)printf("\n계속\n");
     else{
        break;
     }

    }
    
    return 0;
}