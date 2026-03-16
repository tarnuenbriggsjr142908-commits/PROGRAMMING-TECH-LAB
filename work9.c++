#include <iostream>
using namespace std;

class Time
{
public:
    int h, m;

    Time(int h1, int m1)
    {
        h = h1;
        m = m1;
    }

    int operator-(Time t)
    {
        int t1 = h*60 + m;
        int t2 = t.h*60 + t.m;

        int diff = t1 - t2;

        if(diff < 0)
            throw "Negative Duration";

        return diff;
    }
};

int main()
{
    try
    {
        Time t1(5,30), t2(6,0);

        cout << "Difference = " << t1 - t2 << " minutes";
    }
    catch(const char* msg)
    {
        cout << msg;
    }

    return 0;
}