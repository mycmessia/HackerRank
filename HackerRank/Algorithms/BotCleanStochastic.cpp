//
//  BotCleanStochastic.cpp
//  HackerRank
//
//  Created by 梅宇宸 on 23/02/2017.
//  Copyright © 2017 梅宇宸. All rights reserved.
//

#include<iostream>
#include<vector>

using namespace std;

void nextMove (int posr, int posc, vector <string> board) {
    //add logic here
    int dirtyR = -1;
    int dirtyC = -1;
    
    for (unsigned i = 0; i < board.size(); i++)
    {
        for (unsigned j = 0; j < board[i].size(); j++)
        {
            if (board[i][j] == 'd')
            {
                dirtyR = i;
                dirtyC = j;
                break;
            }
        }
    }
    
    int rowDiff = posr - dirtyR;
    int colDiff = posc - dirtyC;
    
    string result = "";
    
    if (rowDiff > 0)
    {
        result = "UP";
    }
    else if (rowDiff == 0)
    {
        if (colDiff > 0)
        {
            result = "LEFT";
        }
        else if (colDiff == 0)
        {
            result = "CLEAN";
        }
        else
        {
            result = "RIGHT";
        }
    }
    else
    {
        result = "DOWN";
    }
    
    cout << result << endl;
}

int main (void)
{
    int pos[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    for(int i=0;i<5;i++) {
        string s;
        cin >> s;
        board.push_back(s);
    }
    nextMove(pos[0], pos[1], board);
    return 0;
}
