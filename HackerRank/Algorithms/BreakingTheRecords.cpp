//
//  BreakingTheRecords.cpp
//  HackerRank
//
//  Created by 梅宇宸 on 05/04/2017.
//  Copyright © 2017 梅宇宸. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> getRecord (vector <int> s)
{
    // Complete this function
    vector<int> record (2);
    int best = s[0];
    int worst = s[0];
    int breakBest = 0;
    int breakWorst = 0;
    
    for (int i = 1; i < s.size (); i++)
    {
        if (s[i] > best)
        {
            breakBest++;
            best = s[i];
        }
        else if (s[i] < worst)
        {
            breakWorst++;
            worst = s[i];
        }
    }
    
    record[0] = breakBest;
    record[1] = breakWorst;
    
    return record;
}

int main ()
{
    int n;
    cin >> n;
    vector<int> s(n);
    for (int s_i = 0; s_i < n; s_i++)
    {
        cin >> s[s_i];
    }
    vector<int> result = getRecord(s);
    string separator = "", delimiter = " ";
    for (auto val: result)
    {
        cout << separator << val;
        separator = delimiter;
    }
    cout << endl;
    return 0;
}