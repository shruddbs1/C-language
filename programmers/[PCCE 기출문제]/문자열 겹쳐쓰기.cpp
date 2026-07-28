#include <string>
#include <vector>
using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    
    answer = my_string.replace(s,overwrite_string.size(),overwrite_string); //str.replace(시작_위치, 바꿀_길이, "새로운_문자열");

    return answer;
}