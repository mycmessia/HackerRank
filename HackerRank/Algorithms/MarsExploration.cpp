//
//  MarsExploration.cpp
//  HackerRank
//
//  Created by 梅宇宸 on 01/03/2017.
//  Copyright © 2017 梅宇宸. All rights reserved.
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
    string S;
    cin >> S;
    
    int totalChanges = 0;
    for (unsigned i = 0; i < S.size (); i++)
    {
        if (i % 3 == 0 || i % 3 == 2)
        {
            if (S[i] != 'S')
            {
                totalChanges++;
            }
        }
        else
        {
            if (S[i] != 'O')
            {
                totalChanges++;
            }
        }
    }
    
    cout << totalChanges << endl;
    
    return 0;
}
