//
//  linked_list_STL.cpp
//  imbest
//
//  Created by Seung jun Yoo on 11/20/24.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <list>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s; //입력 받을 스트링 변수 선언;
    cin >> s; //입력 받기
    
    list<char> L; //연결리스트 L 생성
    for(auto c : s){ //입력받은 스트링 문자 하나하나 char형 c로 변환
        L.push_back(c); //에디터처럼 맨 뒤에서부터 차례대로 추가
    }
    list<char>::iterator cursor = L.end(); //모든 입력을 끝냈을 땐 커서의 위치는 맨 뒤에 존재
    
    int n; //에디터 사용 횟수를 위한 정수형 변수 선언
    cin >> n; //입력 받기
    while(n--){ //입력 받은 수 만큰 반복
        char cmd; //커맨드 변수 선언
        cin >> cmd; //입력받기
        
        switch(cmd){ //입력받은 커맨드에 대한 스위치 케이스 동작
            case 'L': //커서를 왼쪽으로 움직임
                if(cursor != L.begin()){ //커서가 맨 앞에 존재한다면 더 이상 움직일 수 없음
                    cursor--; //커서 위치를 왼쪽으로 한다.
                }
                break;
            case 'D': //커서를 오른쪽으로 움직임
                if(cursor != L.end()){ //커서가 맨 뒤에 존재한다면 더 이상 움직일 수 없음
                    cursor++; //커서 위치를 오른쪽으로 한다.
                }
                break;
            case 'B': //커서 왼쪽에 있는 문자를 삭제함.
                if(cursor != L.begin()){ //만약 커서가 맨 앞에 존재한다면 동작할 이유가 없음.
                    cursor--; //일단 커서의 위치를 왼쪽으로 조정한 후
                    cursor = L.erase(cursor); //해당 위치에 존재하는 노드(글자)를 삭제한다 -> 그러면 커서는 삭제한 노드(글자)의 다음 노드(글자)를 가리키게 된다.
                }
                break;
            case 'P': //커서 왼쪽에 문자를 추가함
                char cmd2; //추가할 문자 변수 선언.
                cin >> cmd2; //입력 받기
                L.insert(cursor, cmd2); // 현재 커서 위치에 값을 삽입면 커서 기준으로 오른쪽에 존재하는 문자들은 한칸씩 밀리게됨.
                //근데 여기서 중요한건 커서가 가리키는 위치는 변하지 않는다는 것임. 이것이 문자를 하나 추가할때 동작하는 방식과 똑같음
                // abc가 존재하고 커서가 a를 가리키고 있다했을 때 P x를 하면 어떻게 되는가?
                // 커서가 가리키는 위치는 그대로고, x만 앞에서 밀고 들어 오는 형태를 띄지 않는가?
                // 이게 연결 리스트 insert함수와 똑같다는 것이다.
                //insert는 이중 연결리스트로 구현되어있어서 현재 가리키는 주소의 이전 노드(글자)주소를 새 노드로 갱신하여 원래 가리키던 주소는 변하지 않고 동작할 수 있다.
                //그렇다면 새 노드는 기존 노드의 이전 노드에 대한 다음 노드를 새 노드 주소로 받고, 새 노드의 다음 노드 주소를 현재 가리키는 주소로 받아드린다.
                break;
        }
    }
    
    
    for(auto c : L){
        cout << c;
    }
    cout << '\n';
    
    return 0;
}
