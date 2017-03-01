//
//  Mini-Max Sum.cpp
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

bool compareFunc (int i, int j)
{
    return (i < j);
}

int main (void)
{
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    cin >> a >> b >> c >> d >> e;
    
    vector<long int> arr;
    arr.push_back (a);
    arr.push_back (b);
    arr.push_back (c);
    arr.push_back (d);
    arr.push_back (e);
    sort (arr.begin (), arr.end (), compareFunc);
    
    for (unsigned i = 0; i < arr.size (); i++)
    {
        cout << arr[i] << endl;
    }
    
//    long int sum = 0;
//    
//    for (unsigned i = 0; i < arr.size (); i++)
//    {
//        sum += arr[i];
//    }
//    
//    cout << sum - arr[4] << " " << sum - arr[0] << endl;
    
    return 0;
}
