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

class IceCream {
    
public:
    int cost;
    int index;
    
    IceCream(int cost, int index) : cost (cost), index (index) {}
};

int binarySearch (int first, int last, vector<IceCream> arr, int search)
{
    while (first < last)
    {
        int mid = first + (last - first) / 2;
        if (search == arr[mid].cost)
        {
            return arr[mid].index;
        }
        if (search < arr[mid].cost)
        {
            last = mid;
        }
        else
        {
            first = mid + 1;
        }
    }
    
    return -1;
}

bool compare (IceCream& c1, IceCream& c2)
{
    return (c1.cost < c2.cost);
}

int main ()
{
    int t;
    int n, m;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        cin >> m >> n;
        vector<IceCream> arr;
        arr.reserve (n);
        
        for (int i = 0; i < n; i++)
        {
            int cost;
            cin >> cost;
            arr.push_back (IceCream (cost, i + 1));
        }
        
        sort(arr.begin(), arr.end(), compare);
        int firstIndex = 100000, secondIndex = 100000;
        for (int i = 0; i < n - 1 ; i++)
        {
            int search = m - arr[i].cost;
            if (search >= arr[i].cost)
            {
                int index = binarySearch (i + 1, n, arr, search);
                if (index != -1)
                {
                    firstIndex = min (arr[i].index, index);
                    secondIndex = max (arr[i].index, index);
                    cout << firstIndex << " " << secondIndex << endl;
                    break;
                }
            }
            else
            {
                int index = binarySearch (0, i, arr, search);
                if (index != -1)
                {
                    firstIndex = min (arr[i].index, index);
                    secondIndex = max (arr[i].index, index);
                    cout << firstIndex << " " << secondIndex << endl;
                    break;
                }
            }
        }
    }
}