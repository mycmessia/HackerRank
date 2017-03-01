#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const vector<string> explode (const string& s, const char& c)
{
    string buff{""};
    vector<string> v;
    
    for (auto n:s)
    {
        if (n != c)
            buff+=n;
        else if (n == c && buff != "")
        {
            v.push_back(buff);
            buff = "";
        }
    }
    
    if (buff != "") v.push_back(buff);
    
    return v;
}

string toStrAddZero (int n)
{
    if (n < 10)
    {
        return "0" + to_string (n);
    }
    
    return to_string (n);
}

int main ()
{
    string time;
    cin >> time;
    
    vector<string> v{explode (time, ':')};
    
    int hour = stoi (v[0], nullptr);
    int minute = stoi (v[1], nullptr);
    int second = stoi (v[2].substr (0, 2), nullptr);
    string ap = v[2].substr (2, 2);

    if (ap == "PM")
    {
        if (hour != 12)
            hour += 12;
    }
    else
    {
        if (hour == 12)
            hour = 0;
    }
    
    cout << toStrAddZero (hour) << ":" << toStrAddZero (minute) << ":" << toStrAddZero (second) << endl;
    
    return 0;
}