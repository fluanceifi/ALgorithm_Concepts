//
//  array_test_alphabet.cpp
//  imbest
//
//  Created by Seung jun Yoo on 11/20/24.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin >> s; //문자열 입력
    
    for(char a = 'a' ; a <= 'z' ; a++){ //a부터 z까지 (아스키코드로 아마 97~126?)
        int cnt = 0; //cnt는 입력받은 문자열 s에 알파벳이 몇개인지 알려주는 것
        for(auto c : s) //입력받은 문자열 s의 첫 글자부터 끝 글짜까지 문자형으로 바꿔줌
            if(a == c) // a~z까지 다 돌아서 해당 문자와 같은 알파벳이 있다면 /없다면 패스
                cnt++; //cnt를 증가시키고 /없으면 패스
        cout << cnt << ' '; // 해당되는 문자의 횟수를 출력하고 문자열의 다음 문자로 넘어감...
    }
    cout << '\n'; 
    
    
    return 0;
}

