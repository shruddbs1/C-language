#include <iostream>

using namespace std;

int main(void) {
    string message = "Let's go!";
    string me;
    int a;
    int b;
    int c;

    cout << 3+1<< endl <<"안녕하세요" << endl; //출력 cout, 나줘 줄바꿈 endl
    getline(cin, me); //뛰어 쓰기 가능 getline(cin, str)
    cin >> a >> b >> c; //뛰어쓰기 불가능 입력
    cout << message.length() << me << a+b+c <<endl; //text.length() 문자길이(sizeof)
    cout << message[2];

    return 0;
}