//
//  EqualizeTheArray.cpp
//  HackerRank
//
//  Created by 梅宇宸 on 01/03/2017.
//  Copyright © 2017 梅宇宸. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main ()
{
    int size;
    cin >> size;
    
    vector<int> numbers (100, 0);
    
    for (int i = 0; i < size; i++)
    {
        int n;
        cin >> n;
        numbers[n]++;
    }
    
    int max = 0;
    for (int i = 0; i < 100; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    
    cout << size - max << endl;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}