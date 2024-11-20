//
//  linked_list_array.cpp
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
using namespace std;

static const int MX = 1000005;
static int dat[MX], pre[MX], nxt[MX];
static int unused = 1;

void insert(int addr, int num){
    dat[unused] = num; //새 노드에 데이터 저장
    pre[unused] = addr; // 새 노드에 이전 노드를 연결시킴.
    nxt[unused] = nxt[addr]; //새 노드의 다음 노드는 기존 노드의 다음노드와 같게 설정
    if(nxt[addr] != -1) pre[nxt[addr]] = unused; //기존노드와 연결된 노드가 존재한다면, 기존노드의 다음 노드에 대한 전 노드는 새 노드가 된다.
    nxt[addr] = unused; //기존노드의 다음 노드는 새 노드로 설정
    unused++; //다음 인덱스로 이동
}

void erase(int addr){
    nxt[pre[addr]] = nxt[addr]; //현재 노드 기준으로 이전 노드의 다음노드를 현재노드의 다음노드로 설정해준다. (삭제 전에 서로 먼저 연결을 해준다.)
    //만약에 현재 노드 뒤에 다음 노드가 존재한다면 (현재 노드가 중간에 낀 상태라면),
    //현재노드의 다음노드에 대한 이전노드는 현재노드의 이전노드가 된다.
    if(nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}

void traverse(){
  int cur = nxt[0];
  while(cur != -1){
    cout << dat[cur] << ' ';
    cur = nxt[cur];
  }
  cout << "\n\n";
}

void insert_test(){
  cout << "****** insert_test *****\n";
  insert(0, 10); // 10(address=1)
  traverse();
  insert(0, 30); // 30(address=2) 10
  traverse();
  insert(2, 40); // 30 40(address=3) 10
  traverse();
  insert(1, 20); // 30 40 10 20(address=4)
  traverse();
  insert(4, 70); // 30 40 10 20 70(address=5)
  traverse();
}

void erase_test(){
  cout << "****** erase_test *****\n";
  erase(1); // 30 40 20 70
  traverse();
  erase(2); // 40 20 70
  traverse();
  erase(4); // 40 70
  traverse();
  erase(5); // 40
  traverse();
}

int main(int argc, char* argv[]) {
    
  fill(pre, pre+MX, -1);
  fill(nxt, nxt+MX, -1);
  insert_test();
  erase_test();
    return 0;
}
