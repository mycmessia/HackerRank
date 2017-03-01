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

//bool findIndex (vector<int> &arr)
//{
//    for (unsigned i = 0; i < arr.size (); i++)
//    {
//        int sumLeft = 0;
//        int sumRight = 0;
//        for (unsigned j = 0; j < i; j++)
//            sumLeft += arr[j];
//        
//        for (unsigned k = i + 1; k < arr.size (); k++)
//            sumRight += arr[k];
//        
//        if (sumLeft == sumRight)
//            return true;
//    }
//    
//    return false;
//}

bool hasIndex (vector<int> &arr)
{
    // use i, j from two ends to center
    int i = 0;
    int j = (int)arr.size () - 1;
    int sumi = 0, sumj = 0;
    
    while (i != j)
    {
        if (sumi < sumj)
        {
            sumi += arr[i];
            i++;
        }
        else
        {
            sumj += arr[j];
            j--;
        }
    }
    
    if (sumi == sumj)
        return true;
    
    return false;
}

int main ()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int times;
    cin >> times;
    
    while (times > 0)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        if (hasIndex (arr))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
        times--;
    }
    
    return 0;
}