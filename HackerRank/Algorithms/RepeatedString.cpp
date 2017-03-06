//
//  RepeatedString.cpp
//  HackerRank
//
//  Created by 梅宇宸 on 06/03/2017.
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
    string s;
    cin >> s;
    long n;
    cin >> n;
    
    unsigned long size = s.size();
    unsigned long count = 0;
    
    for (unsigned long i = 0; i < size; i++)
    {
        if (s[i] == 'a')
        {
            count++;
        }
    }
    
    unsigned long times = n / size;
    unsigned long total = count * times;
    unsigned long more = n % size;
    
    for (unsigned long i = 0; i < more; i++)
    {
        if (s[i] == 'a')
        {
            total++;
        }
    }
    
    cout << total;
    
    return 0;
}
