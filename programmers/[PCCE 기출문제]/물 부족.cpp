#include <string>
#include <vector>

using namespace std;

int solution(int storage, int usage, vector<int> change) {
    int total_usage = 0;
    for(int i=0; i<change.size(); i++){
        usage = usage * (1+change[i] / 100.0); //usage += usage * change[i] / 100;  (소수점을 만들지 않고 계산 하던가 곱할때 소숫점 포함시키기)
        total_usage += usage;
        if(total_usage > storage){
            return i;
        }
    }
    return -1;
}