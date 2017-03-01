//
//  BinarySearch.cpp
//  HackerRank
//
//  Created by 梅宇宸 on 17/1/25.
//  Copyright © 2017年 梅宇宸. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main ()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n1, n2;
    cin >> n1;
    vector<int> arr1 (n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    
    cin >> n2;
    vector<int> arr2 (n2);
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    
    sort (arr1.begin(), arr1.end());
    sort (arr2.begin(), arr2.end());
    
    vector<int> missingArr;
    
    int missingCounter = 0;
    for (int i = 0; i < arr2.size (); i++)
    {
        if (arr2[i] != arr1[i - missingCounter])
        {
            missingArr.push_back (arr2[i]);
            missingCounter++;
        }
    }
    
    for (int i = 0; i < missingArr.size (); i++)
    {
        if (i > 0 && missingArr[i] == missingArr[i - 1])
        {
            continue;
        }
        else
        {
            cout << missingArr[i] << " ";
        }
    }
    cout << endl;
    
    
    return 0;
}