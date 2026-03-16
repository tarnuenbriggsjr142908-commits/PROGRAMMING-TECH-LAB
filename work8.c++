#include <iostream>
using namespace std;

class Array
{
    int arr[5];

public:
    int& operator[](int i)
    {
        return arr[i];
    }
};

int main()
{
    Array a;

    for(int i=0;i<5;i++)
        a[i] = i * 10;

    for(int i=0;i<5;i++)
        cout << a[i] << " ";

    return 0;
}