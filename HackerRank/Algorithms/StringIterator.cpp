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


int main ()
{
    const int n = 26;
    
    vector<int> h (n);
    for (int h_i = 0; h_i < n; h_i++)
    {
        cin >> h[h_i];
    }
    string word;
    cin >> word;
    
    int maxHeight = 0;
    char c;
    for (int i = 0; i < word.size (); i++)
    {
        c = word[i];
        int height = h[(c - 'a')];
        
        if (height > maxHeight)
            maxHeight = height;
    }
    
    cout << maxHeight * word.size () << endl;
    
    return 0;
}
