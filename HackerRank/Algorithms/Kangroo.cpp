//
//  StringIterator.cpp
//  HackerRank
//
//  Created by 梅宇宸 on 17/1/24.
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
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    
    bool result = false;
    
    if (v2 >= v1)
    {
        result = false;
    }
    else
    {
        if ((x2 - x1) % (v1 - v2) != 0)
        {
            result = true;
        }
        else
        {
            result = false;
        }
    }
    
    if (result)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}