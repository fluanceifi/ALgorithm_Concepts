//
//  array_insertAnderase.cpp
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

int func2(int arr[], int n){
    int occur[101] = {};
    for(int i = 0 ; i < n ; i++){ //반복횟수는 배열의 크기 n으로 지정
        if(occur[100 - arr[i]] == 1) //만약 두 값을 더하면 100이되는 위치의 인덱스가 1이라면 서로다른 두 위치에 합이 100이 되는 조건의 값이 존재하는 것
            return 1; //그러면 1을 리턴하여 있다는걸 알려준다.
        occur[arr[i]] = 1; //만약 없다면 다음을 순서를 위하여 해당 값이 존재한다는 걸 알려준다.
    }
    return 0;
}

int main(){
    
    int arr1[3] = {1, 52, 8};
    int arr2[2] = {50, 42};
    int arr3[4] = {4, 13, 63, 87};
    
    cout << func2(arr1, 3) << '\n';
    cout << func2(arr2, 2) << '\n';
    cout << func2(arr3, 4) << '\n';
    return 0;
}

