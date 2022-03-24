#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    //bridge_length 는 다리에 올라갈 수 있는 최대 트럭의 대수이자 트럭이 다리를 통과하는데 걸리는 시간이다.
    int answer = 0;
    
    queue<int> truck;
    queue<int> weights;
    queue<int> outTime;// 다리위 트럭이 나가는 시간
    for(int i = 0; i < truck_weights.size(); i++){
        truck.push(truck_weights[i]); // 트럭에 대한 정보를 queue에 넣어줌
    }
    
    int time = 0; // 현재 시간
    int totalWeight = 0; // 다리에 부하된 트럭의 무게
    int trucks = 0; // 다리에 있는 트럭 대수
    int counter = 0;
    while(true){
        if(!truck.empty()){// 다리에 트럭이 더 올라갈 수 있는가?
            int tw = truck.front(); // 대기열 트럭의 무게
            if(trucks + 1 <= bridge_length && totalWeight+tw <= weight){
                trucks++;
                totalWeight += tw;
                weights.push(tw);
                truck.pop();
                outTime.push(time+bridge_length);
            }
        }
        if(outTime.front() == time){
            outTime.pop();
            trucks--;
            totalWeight -= weights.front();
            weights.pop();
            counter++;
        }
        else if(counter == truck_weights.size()){
            answer = time+1;
            break;
        }
        else{
            time++;
        }
        
        //cout<<time<<"초의 트럭 대수는 "<<trucks<<" 이며 총 무게는 "<<totalWeight<<" 입니다."<<endl;
        //cout<<"현재 시간은 "<<time<<endl;
        
               
    }
    
    return answer;
}