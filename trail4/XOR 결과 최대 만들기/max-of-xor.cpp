#include <iostream>
#include <vector>
using namespace std;

int n, m;
int A[20];
vector<int> answer;
int max_xor = 0;

void Choice(int curr_num, int cnt){
    if(cnt == m){
        int result = 0;
        for(int i = 0; i < m; i++){
            result ^= answer[i];
        }

        if(max_xor < result){
            max_xor = result;
        }
        return;
    }
    
    for(int i = curr_num; i < n; i++){
        answer.push_back(A[i]);       
        Choice(i+1, cnt+1);
        answer.pop_back();
    }
    
}


int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    Choice(0,0);
    cout<<max_xor;
    return 0;
}