//
//  VariableSizedArrays.cpp
//  HackerRank
//
//  Created by 梅宇宸 on 06/04/2017.
//  Copyright © 2017 梅宇宸. All rights reserved.
//

#include <stdio.h>

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int dimensional = 0;
    int queries = 0;
    
    cin >> dimensional >> queries;
    
    vector<vector<int>> v;
    
    for (int i = 0; i < dimensional; i++)
    {
        v.push_back (vector<int> ());
    }
    
    for (int i = 0; i < dimensional; i++)
    {
        int size = 0;
        cin >> size;
        
        for (int j = 0; j < size; j++)
        {
            int n = 0;
            cin >> n;
            v[i].push_back (n);
        }
    }
    
    int col = 0, row = 0;
    for (int i = 0; i < queries; i++)
    {
        cin >> col >> row;
        cout << v[col][row] << endl;
    }
    
    return 0;
}