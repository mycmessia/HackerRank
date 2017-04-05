//
//  CatsAndAMouse.cpp
//  HackerRank
//
//  Created by 梅宇宸 on 05/04/2017.
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
    int q;
    cin >> q;
    for (int a0 = 0; a0 < q; a0++)
    {
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        
        int disAC = abs (x - z);
        int disBC = abs (y - z);
        
        if (disAC < disBC)
        {
            cout << "Cat A" << endl;
        }
        else if (disAC > disBC)
        {
            cout << "Cat B" << endl;
        }
        else
        {
            cout << "Mouse C" << endl;
        }
    }
    
    
    return 0;
}
