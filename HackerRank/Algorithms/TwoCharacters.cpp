//
//  TwoCharacters.cpp
//  HackerRank
//
//  Created by 梅宇宸 on 26/02/2017.
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

int calcString (char first, char second, string& s)
{
    vector<char> charVector;
    
    for (int i = 0; i < s.size (); i++)
    {
        if (s[i] == first || s[i] == second)
        {
            charVector.push_back (s[i]);
            
            int size = (int)charVector.size ();
            
            if (size > 1 && charVector[size - 1] == charVector[size - 2])
            {
                return 0;
            }
        }
    }
    
    return (int)charVector.size ();
}

int main ()
{
    int len;
    cin >> len;
    string s;
    cin >> s;
    
    const int MAX = 26;
    int arr[MAX] = { 0 };
    int uniqueCharacter = 0;
    for (int i = 0; i < len; i++)
    {
        int index = s[i]-'a';
        if (arr[index] == 0)
        {
            arr[index] = 1;
            uniqueCharacter++;
        }
    }
    
    char first, second;
    int longest = 0;
    for (int i = 0; i < MAX; i++)
    {
        if (arr[i] == 1)
        {
            first = 'a' + i;
            
            for (int j = i + 1; j < MAX; j++)
            {
                if (arr[j] == 1)
                {
                    second = 'a' + j;
                    
                    int res = calcString (first, second, s);
                    
                    if (res && res > longest)
                    {
                        longest = res;
                    }
                }
            }
        }
    }
    
    cout << longest << endl;
    
    return 0;
}