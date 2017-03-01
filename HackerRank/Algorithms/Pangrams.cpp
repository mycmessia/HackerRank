//
//  Pangrams.cpp
//  HackerRank
//
//  Created by 梅宇宸 on 26/02/2017.
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
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    string line;
    
    getline (cin, line);
    
    const int MAX = 26;
    int arr[MAX] = {0};
    bool isPangrams = true;
    
    for (int i = 0; i < line.size (); i++)
    {
        if (isalpha(line[i]))
        {
            int index = tolower(line[i]) - 'a';
            if (arr[index] == 0)
            {
                arr[index] = 1;
            }
        }
    }
    
    for (int i = 0; i < MAX; i++)
    {
        if (arr[i] == 0)
        {
            isPangrams = false;
        }
    }
    
    if (isPangrams)
    {
        cout << "pangram" << endl;
    }
    else
    {
        cout << "not pangram" << endl;
    }
    
    return 0;
}