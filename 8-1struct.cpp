#include<stdio.h>

struct game{
    char *name;
    int year;

    struct game *friendgame;
}; //뒤에 세미콜론 필요


int main (){
    //구조체 사용
    struct game game1;//1
    game1.name = "lol";
    game1.year = 2009;


    struct game game2 = {"dia", 1998};//2


    //구조체 출력
    printf("%s %d\n", game1.name, game1.year);
    printf("%s %d\n", game2.name, game2.year);


    //구조체 배열
    struct game game3[2] = {{"star", 1998}, {"mac, 2009"}};
    printf("%s %d\n", game3[0].name, game3[0].year);
    printf("%s %d\n", game3[1].name, game3[1].year);

    //포인터 배열
    struct game * game4;
    game4 = &game1;
    *game4 = {"over", 2016};
    printf("%s %d\n", game1.name, game1.year);
    printf("%s %d\n", game4->name, game4->year);


    //구조체 안의 구조체
    game1.friendgame = &game2;
    printf("%s %d\n", game1.friendgame->name, game1.friendgame->year);


    //typedef 변수 이름지정
    int i = 1;
    typedef int 정수;
    정수 k = 1;
    typedef struct game 게임정보;
    게임정보 game5 = {"shark", 2007};
    printf("%s %d\n", game5.name, game5.year);

    


    return 0;
}