//
//  BotSavesPrincess.cpp
//  HackerRank
//
//  Created by 梅宇宸 on 17/1/26.
//  Copyright © 2017年 梅宇宸. All rights reserved.
//
#include <iostream>
#include <vector>
using namespace std;

void displayPathtoPrincess(int n, vector <string> grid)
{
    //your logic here
    int mRow = 0;
    int mCol = 0;
    int pRow = 0;
    int pCol = 0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < grid[i].size (); j++)
        {
            if (grid[i][j] == 'm')
            {
                mRow = i;
                mCol = j;
            }
            else if (grid[i][j] == 'p')
            {
                pRow = i;
                pCol = j;
            }
        }
    }
    
    // go down
    if (mRow < pRow)
    {
        int tRow = mRow;
        while (tRow < pRow)
        {
            tRow++;
            cout << "DOWN" << endl;
        }
    }
    else if (mRow > pRow)
    {
        int tRow = mRow;
        while (tRow > pRow)
        {
            tRow--;
            cout << "UP" << endl;
        }
    }
    
    if (mCol < pCol)
    {
        int tCol = mCol;
        while (tCol < pCol)
        {
            tCol++;
            cout << "RIGHT" << endl;
        }
    }
    else if (mCol > pCol)
    {
        int tCol = mCol;
        while (tCol >  pCol)
        {
            tCol--;
            cout << "LEFT" << endl;
        }
    }
}

int main(void) {
    
    int m;
    vector <string> grid;
    
    cin >> m;
    
    for (int i=0; i<m; i++)
    {
        string s;
        cin >> s;
        grid.push_back(s);
    }
    
    displayPathtoPrincess (m,grid);
    
    return 0;
}