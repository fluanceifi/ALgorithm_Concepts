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
    
    list<int> L = {1, 2};
    list<int>::iterator t = L.begin(); //시작지점 1을 가리키는 t 생성
    L.push_front(10); //맨 앞에 10 추가 --> 절대적인 위치 (10, 1, 2)
    cout<< *t << "\n"; //하지만 t는 여전히 처음가리키던 1을 가리킴 --> t는 연결리스트에서 상대적인 위치를 가리킴...
    L.push_back(5); //리스트의 맨 뒤에 추가 --> 절대적인 위치 (10, 1, 2, 5)
    L.insert(t, 6); //현재 t가 가리키는 곳에 6을 삽입 (10, 6, 1, 2, 5)
    t++; //t를 전진시킴 1 -> 2 (t가 가리키는 상대적인 주소는 변하지 않음)
    cout<< *t << "\n"; //2출력
    t = L.erase(t); //t가 가리키는 값을 삭제함. 그럼 t의 위치에 5가 오게되고 t는 이제 맨 끝을 가리키게됨.
    cout<< *t << "\n"; //5출력
    
    //for문을 이용한 2가지 연결리스트 출력방법
    //1
    for(auto i : L){
        cout << i << ' ';
    }
    cout << '\n';
    
    //2
    for(list<int>::iterator it = L.begin() ; it != L.end() ; it++){
        cout << *it << ' ';
    }
    cout << '\n';
    
    return 0;
}
