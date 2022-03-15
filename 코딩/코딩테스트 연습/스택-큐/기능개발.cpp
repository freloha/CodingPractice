#include <string>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> distribute; // distribute는 배포라는 의미
    queue<int> speed;
    
    int progressSize = progresses.size();
    for(int i = 0; i < progressSize; i++){
        distribute.push(progresses[i]); // queue에 progress의 진행도를 넣어줌
        speed.push(speeds[i]);
    }
    
    int endCounter = 0;
    int finishCount = 0;
    int date = 0;
    while(!distribute.empty()){
        cout<<endl;
        if(distribute.front() < 100){
            if(finishCount != 0){
                    answer.push_back(finishCount);
                    finishCount = 0;
            }
            for(int i = 0; i < progressSize; i++){
                cout<<i << "번째 데이터 " <<date << "일차 진행도 : " << distribute.front() <<endl;
                
                int value = distribute.front() + speed.front();
                distribute.push(value);
                int speedPop = speed.front();
                distribute.pop();
                speed.pop();
                speed.push(speedPop);
                
            }
        }
        else{
            distribute.pop();
            speed.pop();
            finishCount++;
            progressSize = distribute.size();
        }
        date++;
    }
    if(finishCount != 0){
        answer.push_back(finishCount);
        finishCount = 0;
    }
    return answer;
}
