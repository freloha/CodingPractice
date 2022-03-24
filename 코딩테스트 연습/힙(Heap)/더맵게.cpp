#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    
    priority_queue<int, vector<int>, greater<int>> que;
    for(int i = 0; i < scoville.size(); i++){
        que.push(scoville[i]);
    }
    
    while(que.top()<K){
        if(que.size() == 1){
            return -1;
        }
        int first = que.top();
        //cout<<"first:"<<first<<endl;
        que.pop();
        int second = que.top();
        //cout<<"second:"<<second<<endl;
        que.pop();
        
        que.push(first+second*2);
        answer++;
    }
    
    return answer;
}