#include <iostream>

using namespace std;

int X;

int main() {
    cin >> X;

    // Please write your code here.
    //속도를 유지할지 증가시킬 지 감소시킬지 결정해야 함.
    //X만큼 달리기를 해야 한다.
    //이동도중에는 속도가 0이 되면 안됨.


    //속도 조절을 통해 도착지까지 가는 최소 시간 구하기.
    //속도를 전부 더했을 때 X값이 나오면 

    int velocity = 0;
    int time = 0;
    int distance = 0;

    while(distance < X){
        int remain = X - distance;

        if(remain >= (velocity + 1) * (velocity + 2) / 2){
            velocity++;
        }else if(remain < (velocity) * (velocity + 1) / 2){
            velocity--;
        }

        distance += velocity;
        time++;
    }

    cout<<time;

    
    return 0;
}
