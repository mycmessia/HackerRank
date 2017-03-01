//
//  BinarySearch.cpp
//  HackerRank
//
//  Created by 梅宇宸 on 17/1/25.
//  Copyright © 2017年 梅宇宸. All rights reserved.
//

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> c(n);
    for (int c_i = 0; c_i < n; c_i++)
    {
        cin >> c[c_i];
    }
    
    int stepCounter = 0;
    int curPos = 0;
    
    while (curPos < n - 1)
    {
        if (c[curPos + 2] == 0)
        {
            curPos += 2;
        }
        else
        {
            curPos++;
        }
        
        stepCounter++;
    }
    
    cout << stepCounter << endl;
    
    return 0;
}
