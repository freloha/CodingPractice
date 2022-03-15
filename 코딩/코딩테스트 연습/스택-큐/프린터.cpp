#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    
    queue<int> sort;
    queue<int> sorted;
    int max = 1;
    
    for(int i = 0; i < priorities.size(); i++){
        sort.push(i);
        if(max < priorities[i]){
            max = priorities[i];
        }
    }
    
    while(!sort.empty()){
        int front = sort.front();
        sort.pop();
        if(priorities[front] == max){
            priorities[front] = 0;
            //cout<<"front : " << front << endl;
            sorted.push(front);
            max = *max_element(priorities.begin(), priorities.end());
        }
        else{
            sort.push(front);
        }
    }
    
    int index;
    
    for(int i = 0; i < priorities.size(); i++){
        index = sorted.front();
        sorted.pop();
        cout<<"index : " << index << endl;
        if(index == location){
            answer = i + 1;
        }
    }
    
    return answer;
}