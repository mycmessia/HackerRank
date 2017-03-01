//
//  StringIterator.cpp
//  HackerRank
//
//  Created by 梅宇宸 on 17/1/24.
//  Copyright © 2017年 梅宇宸. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printNet (vector<vector<char>> net)
{
    for (unsigned i = 0; i < net.size (); i++)
    {
        for (unsigned j = 0; j < net[i].size (); j++)
        {
            cout << net[i][j];
        }
        
        cout << endl;
    }
}

int main ()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int times;
    cin >> times;
    for (int i = 0; i < times; i++)
    {
        int size;
        cin >> size;
        
        vector<vector<char>> net (size);
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                char c;
                cin >> c;
                net[j].push_back (c);
            }
            
            sort (net[j].begin(), net[j].end());
        }
        
        bool res = true;
        int h = 0;
        while (h < size - 1)
        {
            for (int l = 0; l < size; l++)
            {
                if (net[h][l] > net[h + 1][l])
                {
                    res = false;
                    break;
                }
            }
            
            h++;
        }
        
        if (res)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
//        printNet (net);
    }
    
    return 0;
}
