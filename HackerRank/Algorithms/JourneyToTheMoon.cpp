//Animesh Sinha

#include <iostream>
#include <list>
#include <vector>
#include <stdio.h>
#include <iterator>
#include <cmath>

#define MAX 100000

using namespace std;

list<int> *ad;
int *visited;
int vertices;

void DFS(int u)
{
    visited[u] = 1;
    
    vertices++;
    
    list<int>::iterator it;
    
    for (it=ad[u].begin(); it!=ad[u].end(); it++)
    {
        if (visited[*it] == 0)
        {
//            visited[*it] = 1;
            DFS(*it);
        }
    }
}

int main()
{
    int i, m, u, v, numComponents = 0;
    long long int n;    // number of astronauts
    int eachC[MAX];
    
    cin >> n >> m;
    
    if (n == 1)
    {
        cout << "0\n";
        return 0;
    }
    
    ad = new list<int>[n];
    
    list<int>::iterator it;
    
    for (i = 0; i < m; i++)
    {
        cin >> u >> v;
        
        ad[u].push_back (v);     // people from the same countries as astro 0 will in ad[0] like 1, 2, 3
        ad[v].push_back (u);
    }
    
    visited = new int[n];
    
    for (i = 0; i < n; i++)
    {
        visited[i] = 0;
    }
    
    for (i = 0; i < n; i++)
    {
        if (visited[i] == 0)
        {
            vertices = 0;
            DFS (i);
            eachC[numComponents] = vertices;    // how many people in this country
            numComponents++;
        }
    }
    
    long long int totalWays = n * (n - 1) / 2;      // choose 2 from all
    long long int sameWays = 0;                 // choose 2 from the same country
    
    for (i = 0; i < numComponents; i++)
    {
        sameWays = sameWays + (eachC[i] * (eachC[i] - 1) / 2);
    }
    
    cout << (totalWays - sameWays) << endl;
    
    delete[] visited;
    
    return 0;
}