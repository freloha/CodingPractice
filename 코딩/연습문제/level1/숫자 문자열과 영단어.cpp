#include <string>
#include <vector>
#include <iostream>

using namespace std;

// 되게 근본적이고 단순한 방법으로 코딩했을때의 결과입니다.
// 코딩테스트 연습 > 2021 카카오 채용연계형 인턴십 > 숫자 문자열과 영단어

int solution(string s) {
    string answer = "";

    int start = 0;
    int count = 1;
    //cout<<"입력문 length : "<<s.length()<<endl;
    
    for(int i = 0; i < s.length(); i++){
        if(s[i] > 47 && s[i] < 58){ // 문자가 숫자일 때
            count = 1;
            //cout<<"s[i] : "<<s[i]<<endl;
            answer += s[i];
            start = i + 1;
        }
        else{ // 숫자가 아닐 때
            string ex = s.substr(start,count++);
            //cout<<"ex : "<<ex<<endl;
            if(ex.compare("one") == 0){
                answer.push_back('1');
                start = i+1;
                count = 1;
            }else if(ex.compare("two") == 0){
                answer.push_back('2');
                start = i+1;
                count = 1;
            }else if(ex.compare("three") == 0){
                answer.push_back('3');
                start = i+1;
                count = 1;
            }else if(ex.compare("four") == 0){
                answer.push_back('4');
                start = i+1;
                count = 1;
            }else if(ex.compare("five") == 0){
                answer.push_back('5');
                start = i+1;
                count = 1;
            }else if(ex.compare("six") == 0){
                answer.push_back('6');
                start = i+1;
                count = 1;
            }else if(ex.compare("seven") == 0){
                answer.push_back('7');
                start = i+1;
                count = 1;
            }else if(ex.compare("eight") == 0){
                answer.push_back('8');
                start = i+1;
                count = 1;
            }else if(ex.compare("nine") == 0){
                answer.push_back('9');
                start = i+1;
                count = 1;
            }else if(ex.compare("zero") == 0){
                answer.push_back('0');
                start = i+1;
                count = 1;
            }           
        }
    }
    int ret = stoi(answer);
    return ret;
}

/*
*#include <bits/stdc++.h>
*using namespace std;
*int solution(string s) {
*    vector<string> patterns = { "zero","one","two","three","four","five","six","seven","eight","nine" };
*    string num = "0123456789";
*    for (int i = 0; i < num.size(); i++) 
*        s = regex_replace(s, regex(patterns[i]), num.substr(i,1));
*    return stoi(s);
*}
*/