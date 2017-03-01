//
//  main.cpp
//  HackerRank
//
//  Created by 梅宇宸 on 17/1/23.
//  Copyright © 2017年 梅宇宸. All rights reserved.
//
/*
 Two players (numbered 1 and 2) are playing a game with  stones. Player  always plays first, and the two players move in alternating turns. The game's rules are as follows:
 
 In a single move, a player can remove either 2, 3, or 5 stones from the game board.
 If a player is unable to make a move, that player loses the game.
 Given the number of stones, find and print the name of the winner (i.e., First or Second ) on a new line. Each player plays optimally, meaning they will not make a move that causes them to lose the game if some better, winning move exists.
 
 Input Format
 
 The first line contains an integer, , denoting the number of test cases.
 Each of the  subsequent lines contains a single integer, , denoting the number of stones in a test case.
 
 Constraints
 
 1 <= T <= 100
 1 <= n <= 100
 
 Output Format
 
 On a new line for each test case, print  if the first player is the winner; otherwise, print .
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main (int argc, const char * argv[])
{
    // false Second Win
    // true First Win
    bool resultArr[101] = { true };
    
    resultArr[1] = false;
    resultArr[2] = true;
    resultArr[3] = true;
    resultArr[4] = true;
    resultArr[5] = true;
    
    for (int i = 6; i < 101; i++)
    {
        if (!resultArr[i - 2] || !resultArr[i - 3] || !resultArr[i - 5])
        {
            resultArr[i] = true;
        }
        else
        {
            resultArr[i] = false;
        }
    }
    
    int count = 0;
    cin >> count;
    
    for (int i = 0; i < count; i++)
    {
        int n = 0;
        cin >> n;
        
        if (resultArr[n])
        {
            cout << "First Win" << endl;
        }
        else
        {
            cout << "Second Win" << endl;
        }
    }

    return 0;
}
