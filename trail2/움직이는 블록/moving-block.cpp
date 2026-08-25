#include <iostream>

using namespace std;

int n;
int blocks[10000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> blocks[i];
    }

    // Please write your code here.
    int ave = 0;
    for(int i = 0; i < n; i++){
        ave +=blocks[i];
    }
    ave /= n;
    int cnt = 0;
    for(int skip = 0; skip < n; skip++){
        if(blocks[skip] > ave){
            for(int i = 0; i < n; i++){
                if(skip == i){
                    continue;
                }
                while(blocks[i] < ave && blocks[skip] > ave){
                    blocks[i]++;
                    blocks[skip]--;
                    cnt++;
                }
            }
        }
    }

    cout<<cnt;
   
    return 0;
}