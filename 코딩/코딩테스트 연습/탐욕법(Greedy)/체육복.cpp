#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n;
    sort(lost.begin(),lost.end()); // 정렬 무조건 먼저 해줘야 함
    sort(reserve.begin(),reserve.end()); // 정렬 무조건 먼저 해줘야 함
    
    /*
    * lost와 reserve에 서로 겹치는 부분이 존재한다면
    */
    for(int i = 0; i < lost.size(); i++){
        int l = lost[i];
        for(int j = 0; j < reserve.size(); j++){
            if(reserve[j] == l){
                reserve.erase(reserve.begin() + j);                
                lost.erase(lost.begin()+i);
                i--;
            }
        }
    }
    /*
    *그렇지 않은 경우, lost기준 좌,우 순서대로 reserve가 있는지 확인
    */
    for(int i = 0; i < lost.size(); i++){
        int l = lost[i];
        for(int j = 0; j < reserve.size();j++){            
            if(reserve[j] == l-1){
                //cout<<"l-1 :"<<l-1<<", reserve[j] : "<<reserve[j]<<endl;
                reserve.erase(reserve.begin() + j);                
                lost.erase(lost.begin()+i);
                i--;
                break;
            }
            else if(reserve[j] == l+1){
                //cout<<"l+1 :"<<l+1<<", reserve[j] : "<<reserve[j]<<endl;
                reserve.erase(reserve.begin() + j);                
                lost.erase(lost.begin()+i);
                i--;
                break;
            }
        }
    }
    answer -= lost.size();
    return answer;
}