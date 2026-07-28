#include <string>

using namespace std;

string solution(string str1, string str2) {
    string answer = "";
  
    for(int i=0;i<str1.length();i++){ //스트링은 +=만으로 문자열 추가 가능 == 개사기
        answer+= str1[i];
     
        answer+= str2[i];

    }
    return answer;
}